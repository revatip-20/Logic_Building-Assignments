#include <stdio.h>
#include <stdlib.h>   // for malloc and free

int Difference(int arr[], int iLength) 
{
    int i = 0, evenSum = 0, oddSum = 0;

    for (i = 0; i < iLength; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            evenSum = evenSum + arr[i];
        }
        else 
        {
            oddSum = oddSum + arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() 
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;   

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    // Allocate memory
    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter %d numbers:\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &arr[iCnt]);
    }

    iRet = Difference(arr, iSize);

    printf("Difference between even sum and odd sum: %d\n", iRet);

    // Free allocated memory
    free(p);

    return 0;
}
