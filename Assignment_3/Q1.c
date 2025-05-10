#include <stdio.h>

void PrintEven(int iNo) 
{
    if(iNo <= 0)
    {
        return;
    }

    int num = 2;  
    int iCnt = 0;
    for (int iCnt = 0; iCnt < iNo; iCnt++) 
    {
        printf("%d\n", num);
        num = num + 2;
    }
}

int main() {
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
