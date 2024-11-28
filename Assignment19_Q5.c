/*
    Accept number from user and Display below pattern:

    Example:      
              input: 8
              Output: 2 4 6 8 10 12 14 16
      
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
          printf("%d\t",iCnt);
       }
          
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number of Elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// Time Complexcity  = iValue*2 N 