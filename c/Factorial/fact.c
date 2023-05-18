#include<stdio.h> 

long long int factorial(int N){
       //code here
    long long int mul=1;
       int i;
       for(i=1;i<=N;++i){
           mul=mul*i;
       }
       return mul;
}

int main() 
{ 
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        printf("%lld\n", factorial(N));
    }
    return 0; 
}
