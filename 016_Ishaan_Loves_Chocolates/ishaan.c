#include <stdio.h>
int chocolates(long long int a[],int n) {
	    int lo=0,hi=n-1;
	    while(lo<hi){
	    	if(a[lo]>a[hi]){
	    		lo++;
	    		}
	    	else{
	    		hi--;
	    		} 
          }    
	return a[lo];
	}
int main() {
	int t; 
	printf("Enter the number:");
	scanf("%d",&t);
	while(t--){
	    long int n;
	    printf("Enter the number");
	    scanf("%ld",&n);
	    long long int a[n]; 
	    printf("Enter the array elements:");
	    
	    for(int i=0; i<n; i++) {
	    	scanf("%lld",&a[i]);
	    }
	    printf("the least level that sister gets:%d",chocolates(a,n));
	    printf("\n");
	return 0;
}
}
