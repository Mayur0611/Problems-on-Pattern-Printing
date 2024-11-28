/*
   Accept number of rows and number of columns from user and 
   display below pattern:

   Example:       Input:  Rows = 3  Col = 4
   
                  Output:  *  #  *  #
                           *  #  *  #
                           *  #  *  #
*/ 

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(j % 2 == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1);

    
    printf("Enter number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}