#include <stdio.h>
int squareSum(int n)
{
    return n*(4*n*n - 1)/3;
}
 
int main()
{
    int n;
    printf("Enter the num:");
    scanf("%d",&n);
    printf("The sum of first n odd numbers:%d",squareSum(n));
    return 0;
}
