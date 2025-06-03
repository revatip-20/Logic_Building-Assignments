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
    int iValue, evenFact, oddFact, diff;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    evenFact = EvenFactorial(iValue);
    oddFact = OddFactorial(iValue);

    diff = evenFact - oddFact;

    printf("Difference between even and odd factorial of %d is: %d\n", iValue, diff);

    return 0;
}
