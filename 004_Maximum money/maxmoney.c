#include<stdio.h>
int main(){
int n,i,sum=0,k;
printf("Enter the no.of houses:");
scanf("%d",&n);
printf("Enter the money:");
scanf("%d",&k);
for(i=0;i<n;i=i+2){
    sum=sum+k;
}
printf("the max amount is %d\n",sum);
}

