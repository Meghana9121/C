#include<stdio.h>
#include<math.h>
long long int setAllOddBits(long long int n) {
int numOfBits = 1 + (int)log2(n);
    // calculating the max power of GP series
    int m = (numOfBits + (numOfBits % 2)) / 2;
    int mask = (pow(4, m) - 1) / 3;
    return mask | n;
    }
int main(){
long long int N;
printf("Enter the integer:");
scanf("%lld",&N);
printf("%lld",setAllOddBits(N));

}
