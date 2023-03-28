#include<stdio.h>
int main(){
int N;
printf("Enter the number:");
scanf("%d",&N);
if(N%5==0){
printf("YES\n");
printf("Because %d can be written as a sum or difference of 5's",N);
}
else{
printf("NO\n");
printf("%d can not be written in sum or difference of 5's.",N);
}
}

