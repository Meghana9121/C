#include<stdio.h>
    int oppositeFaceOfDice(int N)
    {
        if(N>6){
        	printf("enter the num below 6 only");
        	}
        else{
        	
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
                default:printf("cube has 6 sides only");
                	 break;
            }
        }
    }

int main()
{
    int N;
    printf("Enter the number :");
    scanf("%d",&N);
    oppositeFaceOfDice(N);
    
}
