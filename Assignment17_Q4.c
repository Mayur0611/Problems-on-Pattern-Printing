/*
    Write aprogram which accept N from user and prints all odd numbers 
    up to N :
    
    line:
    
    Example:     Input : 5
                 Output : 1 3 5
*/


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
       
    }
  
}


int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

// Time Complexcity: iValue N