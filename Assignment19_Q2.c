/*
    Accept number from user and Display below pattern:

    Example:      
              input: 5
              Output: 5 # 4 # 3 # 2 # 1 #
      
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
        printf("#\t");
        
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