#include <stdio.h>
void printFactorialNums(int n)
{
	int fact = 1;
	int x = 2;
	while (fact <= n) {
		printf("%d ",fact);
		fact = fact * x;

		x++;
	}
	printf("\n");
}

int main()
{
	printFactorialNums(6);
	printFactorialNums(3);
	printFactorialNums(100);
	return 0;
}
