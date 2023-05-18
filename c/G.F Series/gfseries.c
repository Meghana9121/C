#include<stdio.h>
long long gf(int n){
    if(n==0) 
        return 0;
    if(n==1)
        return 1;
    return ((gf(n-2)*gf(n-2))-gf(n-1));
}

int main()
{
        int n;
        printf("Enter the number:");
        scanf("%d",&n) ;
        for(int i=0;i<n;i++){
            printf("%lld ",gf(i) );
        }
        printf("\n");
	return 0;
}
