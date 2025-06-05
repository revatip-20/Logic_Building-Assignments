#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return (double)(fWidth * fHeight);
}

int main()
{
    float fWidth = 0.0, fHeight = 0.0;
    double dRet = 0.0;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &fWidth);

    printf("Enter the height of the rectangle: ");
    scanf("%f", &fHeight);

    dRet = RectArea(fWidth, fHeight);

    printf("Area of the rectangle is: %.2f\n", dRet);

    return 0;
}
