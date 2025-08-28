#include <stdio.h>
#include <stdlib.h>

void Display(int arr[], int iLength) 
{
    int i = 0;
    printf("Elements divisible by 5 are:\n");
    for (i = 0; i < iLength; i++) 
    {
        if (arr[i] % 5 == 0) 
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

    p = (int*)malloc(iSize * sizeof(int));
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

    free(p);
    return 0;
}
