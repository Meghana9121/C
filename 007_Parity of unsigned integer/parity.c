#include<stdio.h>
int main(){
int N,p,bin[32],i=0,j,count=0;
printf("Enter the integer:");
scanf("%d",&N);
while(N!=0){
p=N%2;
bin[i++]=p;
N=N/2;
}
for(j=i-1;j>=0;j--){
printf("%d",bin[j]);
if(bin[j]==1){
count++;
}
}
if(count%2==0){
    printf("\neven");
	}
else
    printf("\nodd");

}
