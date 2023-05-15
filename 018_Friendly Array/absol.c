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
  
  long long int diff(int arr[],int n){
     int sum = 0;
     qsort(arr,n,sizeof(int),compare);
     sum += abs(arr[n-1]-arr[n-2]);
    for(int i=1;i<n;i++)
    {
        
        sum+=abs(arr[i]-arr[i-1]);
        
    }
    return sum;
  }
  // Driver code
  int main() {
    int arr[] = {4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Absolute sum is:%lld\n",diff(arr,n));
    
  }


