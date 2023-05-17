#include <stdio.h> 
int find_Prime(int num)
{
    int i, temp = 0; 
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
     if (temp == 0 && num != 1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
} 
int main()
{
    int num, temp = 0; 
    printf("Enter any number to Check for Prime: ");
    scanf("%d", &num);
    temp = find_Prime(num);
    if (find_Prime(num)==1)
    {
        printf("%d is a Prime Number", num);
    }
    else
    {
        printf("%d is Not a Prime Number", num);
    }
    return 0;
}
