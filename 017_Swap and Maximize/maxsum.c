#include <stdio.h>
#include<stdlib.h>  
int compare(const void* num1, const void* num2) // comparing function  
{  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a > b)  
    {  
        return 1;  
    }  
    else if(a < b)  
    {  
        return -1;  
    }  
    return 0;  
}  
long long int maxSum(int arr[], int n)
{
	int sum = 0;

	// Sorting the array.
	qsort(arr,n,sizeof(int),compare);
	for (int i = 0; i < n/2; i++)
	{
		sum -= (2 * arr[i]);
		sum += (2 * arr[n - i - 1]);
	}

	return sum;
}
int main()
{
	int arr[] = { 4,2,1,8 };
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%lld",maxSum(arr, n) );
	return 0;
}

