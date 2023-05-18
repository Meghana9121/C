#include <stdio.h>
int closestNumber(int n, int m)
{
	int q = n / m;
	int n1 = m * q;
	int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
	if (abs(n - n1) < abs(n - n2))
		return n1;
		
	return n2;
}
int main()
{
	int n = 13, m = 4;
	printf("%d \n",closestNumber(n, m) );
	
	n = -15; m = 6;
	printf("%d \n",closestNumber(n, m));
	
	n = 0; m = 8;
	printf("%d \n",closestNumber(n, m));
	
	n = 18; m = -7;
	printf("%d \n",closestNumber(n, m));
	
	return 0;
}
