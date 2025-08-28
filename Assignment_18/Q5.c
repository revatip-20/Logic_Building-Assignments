#include <stdio.h>
#include <stdlib.h>

void Display(int arr[], int iLength) 
{
    int i = 0;
    printf("Numbers that are multiples of 11:\n");

    for (i = 0; i < iLength; i++) 
    {
        if (arr[i] % 11 == 0)   // check multiple of 11
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() 
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter %d numbers:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    // Free memory
    free(p);

    return 0;
}
