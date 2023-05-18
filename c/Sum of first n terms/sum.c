#include<stdio.h>
#include<math.h>
long long sumOfSeries(long long N) {
    int sum=0;
    sum = pow(((N * (N + 1) ) / 2),2);
    
    return sum;
    }
    
int main() {
	long long int N;
	
	printf("Enter the n i.e. max values of series: ");
	scanf("%lld",&N);

	printf("Sum of the series :%lld ",sumOfSeries(N));
	return 0;
}
