#include<stdio.h>
#include <stdlib.h>
void merge(long long a[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	// Copy data to temp aays L[] and R[] 
	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];
	i = 0;j = 0;k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if there are any
	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(long long int a[],int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

long long altProduct(long long a[], long long n)
{
	int i=0,j=0,mul=1,sum=0;
     	for(i=0,j=n-1;i<n/2;i++,j--){
     		mul=a[i]*a[j];
     		sum=sum+mul;
     	}
     	return sum;
}
int main(){
int n,i;
printf("Enter the array even size:");
scanf("%d",&n);
long long int a[n];
if(n%2==0){
printf("Enter the positive integers:");
for(i=0;i<n;i++){
scanf(" %lld",&a[i]);
}
mergeSort(a,0,n-1);
printf("The sorting array is");
for(i=0;i<n;i++){
printf(" %lld",a[i]);
}
printf("\nthe alternate sum is %lld",altProduct(a,n));
}

else{
printf("Enter the positive integers only\n");
}
}

