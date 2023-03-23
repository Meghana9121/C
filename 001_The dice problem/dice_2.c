#include<stdio.h>
    int oppositeFaceOfDice(int N)
    {
        int o;
        while(N<=6)
        {
            o=7-N;
            break;
        }
        printf("the opposite side of is dice %d", o);
    }

int main()
{
    int N;
    printf("Enter the number :");
    scanf("%d",&N);
    oppositeFaceOfDice(N);
    
}
