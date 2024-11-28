/*
   Accept number of rows and number of columns from user and 
   display below pattern:

   Example:       Input:  Rows = 4  Col = 4
   
                  Output:    *       *       *       #
                             *       *       #       @
                             *       #       @       @
                             #       @       @       @
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0; 

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j == 5)
            {
                printf("#\t");
            }
            else if(i + j < 5)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }

        }
        printf("\n");
    }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter the number of Rows: ");
   scanf("%d",&iValue1);

   printf("Enter the number of Columns: ");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

   return 0;
}