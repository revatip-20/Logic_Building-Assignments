#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i += 2) 
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of %d is: %d\n", iValue, iRet);

    return 0;
}
