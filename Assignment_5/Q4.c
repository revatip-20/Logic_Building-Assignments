#include <stdio.h>

void OddDisplay(int iNo) 
{
    int iCnt = 0;
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main() 
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
