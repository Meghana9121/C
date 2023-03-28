#include<stdio.h>
int main(){
int n,pieces;
printf("Enter the no.of cuts:");
scanf("%d",&n);
pieces=((n*(n+1))/2)+1;
printf("%d pieces can be formed by making %d cuts.",pieces,n);
}
