#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    printf("Factors are:\n");
    NonFact(iValue);

    return 0;
}