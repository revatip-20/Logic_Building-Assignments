#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE; 
        }
        iNo = iNo / 10;
    }

    return FALSE; 
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == 1)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("there is no zero\n");
    }

    return 0;
}
