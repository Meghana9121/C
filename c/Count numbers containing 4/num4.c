#include<stdio.h>
#include<stdbool.h>
bool has4(int x);

int countNumbersWith4(int n)
{
	int result = 0;
	for (int x=1; x<=n; x++)
		result += has4(x)? 1 : 0;

	return result;
}

bool has4(int x)
{
	while (x != 0)
	{
		if (x%10 == 4)
		return true;
		x = x /10;
	}
	return false;
}

int main()
{
int n = 328;
printf("Count of numbers from 1 to %d that have 4 as a digit is %d",n,countNumbersWith4(n) );;
return 0;
}
