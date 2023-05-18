#include <stdio.h>

int middleOfThree(int a, int b, int c)
{
	if ((a < b && b < c) || (c < b && b < a))
	return b;

	else if ((b < a && a < c) || (c < a && a < b))
	return a;

	else
	return c;
}
int main()
{
	int a = 978, b = 300, c = 518;
	printf("%d\n",middleOfThree(a, b, c));
	
	 a = 162, b = 934, c = 200;
	printf("%d\n",middleOfThree(a, b, c));
	return 0;
}
