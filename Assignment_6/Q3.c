#include <stdio.h>

int factorial(int iNo) 
{
    int iRet = 1;
    int iCnt = 0;

    for (int iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        iRet = iCnt * iRet;
    }
    return iRet;
}

int main() 
{
    int iValue;

    printf("Enter a positive integer: ");
    scanf("%d", &iValue);

    if (iValue < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int fact = factorial(iValue);
        printf("Factorial of %d is %d\n", iValue, fact);
    }
    return 0;
}
