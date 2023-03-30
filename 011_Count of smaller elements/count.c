#include<stdio.h>
int countOfElements(int a[], int n, int x){
int i=0,count=0;
for(i=0;i<n;i++){
	if(a[i]==a[i+1]){
		continue;
		}
	else if(a[i]<=x){
		count++;
	}
}
	return count;
}
int main(){
int N,x,i;
printf("Enter the size of the array:");
scanf("%d",&N);
int a[N];
printf("Enter the elements:");
for(i=0;i<N;i++){
scanf("%d",&a[i]);
}
printf("Enter the element:");
scanf("%d",&x);
printf("number of elements which are less than or equal to given element %d:%d",x,countOfElements(a,N,x));
}

