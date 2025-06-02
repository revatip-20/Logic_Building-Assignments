#include <stdio.h>

void Table(int iNo) 
{
    int iCnt = 0;
    int Mult = 0;
    for (int iCnt = 1; iCnt <= 10; iCnt++) 
    {
        Mult = iNo * iCnt;
        printf("%d\n",Mult);
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number to print its table: ");
    scanf("%d", &iValue);

    Table(iValue); 
    return 0;
}
