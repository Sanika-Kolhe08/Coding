//Write a program to write factorial of a number

#include <stdio.h>

int factorial(int iNo)
{
    int iFact = 1;
    for(int iCnt=1;iCnt<=iNo;iCnt++){
    
        iFact = iFact * iCnt;
    }

    return iFact ;
}
int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("Factorial is : %d",iRet);
}