/*
    Write aprogram which accept number from user and print that numbers
    till that Number:
    
    Example:     Input : 5
                 Output : 1 2 3 4 5
*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
  
}


int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// Time Complexcity: iValue*2 N