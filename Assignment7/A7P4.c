//Write a program to to find a odd factorial of a given number
#include <stdio.h>

int DisplayOddFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int fact = 1;
    for(int iCnt = 1; iCnt<= iNo ; iCnt = iCnt + 2)
    {
        fact = fact * iCnt;
    }

    return fact;
}
int main()
{
    int iVaalue = 0;
    int iRet = 0 ;

    printf("Enter a number : ");
    scanf("%d",&iVaalue);

    iRet = DisplayOddFact(iVaalue);
    printf("Odd factorial of given number is : %d",iRet);
    
    return 0 ;
}