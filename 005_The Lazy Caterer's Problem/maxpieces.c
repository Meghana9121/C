#include<stdio.h>
int count(int n)
{
	return ((n*(n+1))/2)+1;
}
int main()
{
	printf("%d pieces can be formed by making %d cuts.",count(6),6);
}
