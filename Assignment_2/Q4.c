#include <stdio.h>

void Display(int iNo, int iFrequency) 
{
    int iCnt = 0;
    for(int iCnt = 0; iCnt < iFrequency; iCnt++) 
    {
        printf("%d", iNo);
    }
}

int main() {
    int iValue = 0;
    int iCount = 0;

    printf("Enter the first number: ");
    scanf("%d", &iValue);

    printf("Enter the second number: ");
    scanf("%d", &iCount);

   Display(iValue, iCount);

    return 0;
}
