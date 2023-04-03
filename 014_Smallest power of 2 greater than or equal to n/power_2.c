#include<stdio.h>
#include<math.h>
long long int nearestPowerOf2(long long int N)
{
    long long int a = log2(N);
 
    if (pow(2, a) == N)
        return N;
 
    return pow(2, a + 1);
}
 

// Driver code
int main()
{
	long long int n ;
	printf("Enter the number:");
	scanf("%lld",&n);
	printf("%lld", nearestPowerOf2(n));
	return 0;
}

