#include <stdio.h>

double SquareMeter(int dValue)
{
    return (double)(dValue * 0.0929);
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters: %.4f\n", dRet);

    return 0;
}
