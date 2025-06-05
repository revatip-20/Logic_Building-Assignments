#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (double)((fTemp - 32) * 5.0 / 9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.2f\n", dRet);

    return 0;
}
