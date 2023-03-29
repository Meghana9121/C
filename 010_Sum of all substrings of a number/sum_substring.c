#include <stdio.h>
#include<string.h>
int toDigit(char c) {
 return (c - '0');
  }
int sumOfSubstrings(char num[],int i)
{
	int m=1000000007;
	int n = strlen(num);
	int sumofdigit[n];
	sumofdigit[0] = toDigit(num[0]);
	int res = sumofdigit[0];
	for (int i = 1; i < n; i++) {
	    int numi = toDigit(num[i]);
	    sumofdigit[i]= (i + 1) * numi + 10 * sumofdigit[i - 1];
		res += sumofdigit[i];
	}
	return res%m;
}
int main()
{
	int j=1;
	char num[50] ;
	printf("Enter the number as string:");
	scanf("%s",num);
	printf("%d",sumOfSubstrings(num,j));
	return 0;
}

