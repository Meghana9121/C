#include <stdio.h>
int gcd(int a, int b)
{
if (a == 0)
	return b;
return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
int result = arr[0];
for (int i = 1; i < n; i++)
{
	result = gcd(arr[i], result);

	if(result == 1)
	{
	return 1;
	}
}
return result;
}

int main()
{
int arr[] = { 2, 4, 6 };
int n = sizeof(arr) / sizeof(arr[0]);
printf("%d",findGCD(arr, n));
return 0;
}
