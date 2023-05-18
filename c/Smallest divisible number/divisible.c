#include<stdio.h>
long long int gcd(int u, int v) {
    while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
}
long long lcm(long long n)
{
	long long ans = 1;
	for (long long i = 1; i <= n; i++)
		ans = (ans * i)/(gcd(ans, i));
	return ans;
}
int main()
{
	long long n ;
	printf("%d\n", lcm(3));
    printf("%d\n",lcm(6));
	return 0;
}
