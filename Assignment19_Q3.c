/*
    Accept number from user and Display below pattern:

    Example:      
              input: 5
              Output: 1 * 2 * 3 * 5 *
      
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        printf("*\t");
        
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

// Time Complexcity  = iValue N 