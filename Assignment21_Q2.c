/*
   Accept number of rows and number of columns from user and 
   display below pattern:

   Example:       Input:  Rows = 4  Col = 4
   
                  Output:  A  B  C  D
                           a  b  c  d
                           A  B  C  D
                           a  b  c  d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   char CCh = 'A';
   char SCh = 'a';


   for(i = 1; i <= iRow; i++)
   {
      for(j = 1 ; j <= iCol; j++)
      {
         if( i % 2 != 0)
         {
            printf("%c\t",CCh);
            CCh++;
         }
         else
         {
            printf("%c\t",SCh);
            SCh++;
         }
      }
      CCh = 'A';
      SCh = 'a';
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