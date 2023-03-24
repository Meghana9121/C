#include <stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the number:");
scanf("%d",&n);
printf("the Nth term series is ");
for(i=1;i<=n;i++){
    sum=sum+i;
    printf("%d ",sum);
}
printf("\nThe %dth term is %d \n",n,sum);
}

