#include <stdio.h>

long long int lcmAndGcd(long long A , long long B) {
    long long int numerator,denominator,remainder,lcm,gcd;
        numerator = (A>B)?A:B;
        denominator = (A<B)?A:B;
        remainder = numerator % denominator;
 
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = A * B / gcd;
    printf("GCD of %d and %d = %d\n", A, B, gcd);
    printf("LCM of %d and %d = %d\n", A, B, lcm);
    }

int main() {
  
        long long int  A,B;
        printf("enter the numbers");
        scanf("%lld %lld",&A,&B);

       long long int ans = lcmAndGcd(A,B);
    return 0;
}
