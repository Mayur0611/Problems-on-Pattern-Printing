/*
    Write aprogram which accept number from user and prints its number 
    line:
    
    Example:     Input : 4
                 Output : -4 -3 -2 -1 0 1 2 3 4
*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt);
    }
  
}


int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// Time Complexcity: iValue N