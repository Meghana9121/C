#include<stdio.h>
int convertFive(int number)
{
	int result = 0;

	int decimalPlace = 1;
	
	if (number == 0)
	{
		result += (5 * decimalPlace);
	}

	while (number > 0)
	{
		if (number % 10 == 0)
		{
			result += (5 * decimalPlace);
		}
		number /= 10;
		decimalPlace *= 10;
	}
	return result;
}

int replace0with5(int number)
{
	return number += convertFive(number);
}
int main()
{
	printf("%d", replace0with5(1004));
}
