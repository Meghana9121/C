#include <stdio.h>
long int sum_of_square_oddNumbers(long int n){
 int sum=0,i;
for(i=0;i<=n+2;i++){
    if(i%2!=0){
        sum=sum+i*i;
        }
    }
printf("sum of squres of odd numbers is %d",sum);
}
int main(){
int n;
printf("sum to n:");
scanf("%d",&n);
sum_of_square_oddNumbers(n);
}
