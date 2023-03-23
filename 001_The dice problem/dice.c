#include<stdio.h>
    int oppositeFaceOfDice(int N)
    {
        // Write Your Code here
        while(N<=6)
        {
            switch(N)
            {
                case 1:return(6);
                        break;
                case 2:return(5);
                        break;
                case 3:return(4);
                        break;
                case 4:return(3);
                        break;
                case 5:return(2);
                        break;
                case 6:return(1);
                        break;
            }
        }
    }

int main()
{
    int N;
    printf("Enter the number :");
    scanf("%d",&N);
    printf("the opposite side of is dice %d",oppositeFaceOfDice(N));
    
}
