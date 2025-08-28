#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    for (int i = 1; i <= size; i++) 
    {
        for (int j = 1; j <= size; j++) 
        {
            if (i == 1 || i == size) 
            {
                printf("%d ", j);
            }
            
            else if (j == 1 || j == size) 
            {
                printf("%d ", j);
            }
            
            else if (i == j) 
            {
                printf("%d ", j);
            }
            
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
