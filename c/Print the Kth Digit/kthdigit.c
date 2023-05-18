#include <stdio.h>
int kthdigit(int a, int b, int k)
{
	int p = pow(a, b);

	int count = 0;
	while (p > 0 && count < k) 
	{
		int rem = p % 10;
		count++;
		if (count == k)
			return rem;

		p = p / 10;
	}

	return 0;
}

int main()
{
	int a = 3, b = 3, k = 1;
	printf("%d\n",kthdigit(a, b, k));
	a = 5, b = 2, k = 2;
    printf("%d\n",kthdigit(a, b, k));
	return 0;
}
