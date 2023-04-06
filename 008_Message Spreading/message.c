#include<stdio.h>
int spread(int N)
{
    return 2*N-2;
}
int main()
{
int N;
printf("Enter the num:");
scanf("%d",&N);
printf("A total of %d messages are sent \n",spread(N));
}
