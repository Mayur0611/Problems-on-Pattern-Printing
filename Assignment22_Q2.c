/*
   Accept number of rows and number of columns from user and 
   display below pattern:

   Example:       Input:  Rows = 4  Col = 5
   
                  Output:  2  4  6  8  10
                           1  3  5  7  9
                           2  4  6  8  10
                           1  3  5  7  9
 
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   int iCnt = 0;

   for(i = 1; i <= iRow; i++)
   {
      for(j = 1; j <= iCol*2; j++)
      {
       if(i % 2 != 0)
       {
         if(j % 2 == 0)
         {
            printf("%d\t",j);
         }
       
       }
       else
       {
         if(j % 2 != 0)
         {
            printf("%d\t",j);
         }
        
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