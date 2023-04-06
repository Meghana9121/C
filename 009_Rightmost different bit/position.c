#include<stdio.h>
#include<math.h>
#include <strings.h>
int posOfRightMostDiffBit(int m, int n)
{
   int res;
	printf("Enter the numbers:");
	scanf("%d %d",&m,&n);
	res=m^n;
	double log2(double x)
	 {
    		return log(x) / log(2.0);
	 }
	if(res==0)
   		return 0;
   		//return (log10(res & -res) / log10(2))+1;

	return log2(res & -res)+1;
	//return ffs(res);
}

int main()
{
unsigned int m,n;
printf("Position of rightmost different bit:%d",posOfRightMostDiffBit(m,n));
}
//while compiling link it with -lm like
//gcc position.c -lm

