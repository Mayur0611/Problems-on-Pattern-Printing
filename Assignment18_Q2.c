/*
    Accept amount in US doller and return its corresponding value in 
    Indian   Currency:(Consider 1$ = 70 Rupees)
    
    Example:     Input : 10 $
                 Output : 700 rupees
*/


#include<stdio.h>

int DollerToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("%d $ = %d rupees",iValue,iRet);

    return 0;
}
