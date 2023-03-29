#include<stdio.h>
     void solve()
     {
        int n,k,ans;
        printf("enter the values of n and k:");
        scanf("%d %d",&n,&k);
        if(n%2==0)
        {
           ans=n/2;
        }
        else
        {
         ans=n/2+1;
        }
        printf("%d",ans*k);
     } 
int main()
{
solve();
printf("\n");     
 return 0;
}
