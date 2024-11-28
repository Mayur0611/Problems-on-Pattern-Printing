/*
    Write a program to find even factorial of given number:
    
    Example:     Input : 5
                 Output : 8
*/


#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int EvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            EvenFact = EvenFact * iCnt;
        }
    }

    return EvenFact;
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of given number is %d",iRet);

    return 0;
}

// Time coplexcity: iValue N
