#include <stdio.h>

int DollarToINR(int iNo)
{
    int rupees;
    rupees = iNo * 70; 
    return rupees; 
}

int main()
{
    int iValue, iRet = 0;

    printf("Enter number in US dollars: ");
    scanf("%d", &iValue); 

    iRet = DollarToINR(iValue);

    printf("Amount in Indian Rupees: %d\n", iRet);

    return 0;
}
