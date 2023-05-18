#include<stdio.h>
int minimumStep(int n){
       int count=0 ;
       
        while(n!=1)
        {
            if(n%3==0)
                n=n/3 ;
            else
                n=n-1 ;
               
            count++ ;
        }
        return count;
    }
int main()
{

        int n ;
        printf("enter the number:") ;
       scanf("%d",&n);
       printf("%d",minimumStep(n)) ;
 return 0;
}
