#include <stdio.h>

void MultipleDisplay(int iNo) 
{
    int iCnt = 0;

    for (int iCnt = 1; iCnt <= 5; iCnt++)
    {

        printf ("%d \n",iNo * iCnt); 
    }
}

int main() 
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
