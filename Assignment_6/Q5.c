#include<stdio.h>

void TableRev(int iNo)
{
    for (int iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}