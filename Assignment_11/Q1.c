#include <stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c ", ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
