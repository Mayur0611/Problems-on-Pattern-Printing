/*
    Write a program which accept number from user and display
    below pattern:

    Example:     Input : 5
                 Output : * * * * * # # # # #
*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt <= iNo*2/2)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
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

// Time Complexcity: iValue*2 N