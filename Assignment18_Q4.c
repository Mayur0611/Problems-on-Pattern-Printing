/*
    Write a program to find odd factorial of given number:
    
    Example:     Input : 5
                 Output : 15
*/


#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int OddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            OddFact = OddFact * iCnt;
        }
    }

    return OddFact;
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of given number is %d",iRet);

    return 0;
}

// Time coplexcity: iValue N
