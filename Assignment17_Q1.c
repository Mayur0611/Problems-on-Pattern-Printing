/*
    Write aprogram which accept number from user and print that number
    of $ & * on screen:

    Example:     Input : 5
                 Output : $   *   $   *   $   *    $    *   $   *
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt %  2 != 0)
        {
            printf("$\t");
        }
        else
        {
            printf("*\t");
        }
    }        

}


int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// Time Complexcity: iValue*2 N