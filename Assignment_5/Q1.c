#include <stdio.h>

void Pattern(int iNo) 
{
    int iCnt = 0;
    for (int iCnt = 0; iCnt < iNo; iCnt++) {
        printf("$ * ");
    }
    
}

int main() 
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
