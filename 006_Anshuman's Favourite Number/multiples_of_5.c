#include<stdio.h>
long int check(long int N)
{
  if(N%5==0){
	printf("YES\n");
	printf("Because %ld can be written as a sum or difference of 5's",N);
      }
  else{
	printf("NO\n");
	printf("%ld can not be written in sum or difference of 5's.",N);
      }
}
int main()
{
long int N;
printf("Enter the number:");
scanf("%ld",&N);
check(N);
}
