#include <stdio.h>
// Function to find nth term
int term(int n)
{
    return n * (n + 1) / 2;
}
  
int main(){
int n,i,sum=0;
printf("Enter the number:");
scanf("%d",&n);
printf("\nThe %dth term is %d \n",n,term(n));
}
