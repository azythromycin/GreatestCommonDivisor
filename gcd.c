#include <stdio.h>
#include <limits.h>

//Variable that finds the minimum of num1 and num2
    int minNum(int num1, int num2){
        if (num1 < num2)
        {
            return num1;
        }
        else
        {
            return num2;
        }
    }

//Function that finds the Greatest Common Factor between two numbers only
int gcd(int num1, int num2)
{   
    //We know that gcd is always greater than or equal to 1 since 1 is a multiple of every number
    int greatestCommonFactor = 1;

    
    for (int i = 2; i <= minNum(num1, num2); i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            greatestCommonFactor = i;
        }
    }

    return greatestCommonFactor;
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2)
    {
        printf("Error: Invalid input.\n");
        return 1; 
    }

    printf("The Greatest Common Divisor is: %d\n", gcd(num1, num2));
    return 0;
}
