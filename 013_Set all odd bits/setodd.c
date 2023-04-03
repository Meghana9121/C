#include<stdio.h>
 long long int setAllOddBits(long long int n) {
 long long mask;
          //find required num such that it
          //is of form 000.....1010
          if(__builtin_clz(n)%2==0){
            mask=0x5555555555555555>>(__builtin_clzll(n));
        }else{
            mask=0xAAAAAAAAAAAAAAAA>>(__builtin_clzll(n));
        }
        // return toggled number
        return n|mask;
}
int main(){
long long int N;
printf("Enter the integer:");
scanf("%lld",&N);
printf("%lld",setAllOddBits(N));

}
