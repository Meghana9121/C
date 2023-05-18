#include<stdio.h>
#include<math.h>
int countPairs(int N)
{
	int count = 0;

	for (int i = 1; i <= cbrt(N); i++)
	{
		int cb = i*i*i;

		int diff = N - cb;

		int cbrtDiff = cbrt(diff);

		if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
			count++;
	}
	return count;
}

int main()
{
    int N=9;
	printf("the count pairs are %d",countPairs(N)) ;
	return 0;
}

