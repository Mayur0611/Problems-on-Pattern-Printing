/*
   Accept number of rows and number of columns from user and 
   display below pattern:

   Example:       Input:  Rows = 5  Col = 5
   
                  Output:  a   b   c   d  e
                           1   2   3   4  5
                           a   b   c   d  e
                           1   2   3   4  5
                           a   b   c   d  e
 
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   char Ch = 'a';
   

   for(i = 1; i <= iRow; i++)
   {
      for(j = 1, Ch = 'a'; j <= iCol; j++, Ch++)
      {
         if(i % 2 != 0)
         {
            printf("%c\t",Ch);
         }
         else
         {
            printf("%d\t",j);
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