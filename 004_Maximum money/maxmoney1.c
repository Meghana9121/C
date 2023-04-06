#include<stdio.h>
void solve();
int main()
{
solve();
printf("\n");     
 return 0;
}
void solve(){ 
int n=4,k=10,ans;
if(n%2==0){
    ans=n/2;
     }
else{
    ans=n/2+1;
    }
 printf("%d",ans*k);
     } 

