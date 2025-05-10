#include <stdio.h>

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("hello\n");
    }
    else 
    {
        printf("demo\n");
    }
}
int main() {
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}
