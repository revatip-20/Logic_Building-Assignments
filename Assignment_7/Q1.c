#include <stdio.h>

void Display(int iNo)
{
    
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
