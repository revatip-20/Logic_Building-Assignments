#include <stdio.h>

int KmToMeter(int iNo)
{
    return (int)(iNo * 1000); 
}

int main()
{
    int iValue = 0.0;
    int iRet = 0;

    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    iRet = KmToMeter(iValue);

    printf("Distance in meters: %d\n", iRet);

    return 0;
}
