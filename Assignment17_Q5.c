/*
    Write aprogram which accept N from user and prints fird=st 5 multiples 
    of N:
    
    line:
    
    Example:     Input : 5
                 Output : 5 10 15 20 25
*/


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
       
    }
  
}


int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

// Time Complexcity:  5N