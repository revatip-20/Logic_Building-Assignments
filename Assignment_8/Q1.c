#include <stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is: %.2f\n", dRet);

    return 0;
}
