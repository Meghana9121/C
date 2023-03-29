// Program to find the parity of a given number
#include <stdio.h>
// Function to find the parity
int findParity(int x)
{
	int y = x ^ (x >> 1);
	y = y ^ (y >> 2);
	y = y ^ (y >> 4);
	y = y ^ (y >> 8);
	y = y ^ (y >> 16);

	// Rightmost bit of y holds the parity value
	// if (y&1) is 1 then parity is odd else even
	if (y & 1)
		return 1;
	return 0;
}
int main()
{
int n;
printf("Enter the num:");
scanf("%d",&n);
(findParity(n)==0)?printf("Even Parity\n"):printf("Odd Parity\n");
return 0;
}

