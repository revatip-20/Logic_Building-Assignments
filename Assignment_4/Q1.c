#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iMult = 1;

    for (iCnt =1; iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    
    printf("%d",iRet);

    return 0;
}