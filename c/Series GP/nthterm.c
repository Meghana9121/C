#include <stdio.h>
#include<math.h>
int Nth_of_GP(int a, int r, int N)
{
    const unsigned int M = 1000000007;
	int T=(a * (int)(pow(r, N - 1)));
	return T % M;
}
int main()
{
    
	// starting number
	int a = 4;
	// Common ratio
	int r = 3;
	// N th term to be find
	int N = 3;
	printf("The %d th term of the series is :%d ",N,Nth_of_GP(a, r, N));
	return 0;
}
