#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 2; i <= iNo; i += 2) 
    {
        iFact *= i;
    }

    return iFact;
}

int main()
{
    int iValue, iRet;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d is: %d\n", iValue, iRet);

    return 0;
}
