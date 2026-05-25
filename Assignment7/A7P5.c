//Write a program to to find a the difference between odd factorial and even factorial of a given number
#include <stdio.h>

int DisplayDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int Oddfact = 1;
    for(int iCnt = 1; iCnt<= iNo ; iCnt = iCnt + 2)
    {
        Oddfact = Oddfact * iCnt;
    }

    int Evenfact = 1;
    for(int iCnt = 2; iCnt<= iNo ; iCnt = iCnt + 2)
    {
        Evenfact = Evenfact * iCnt;
    }

    return Oddfact - Evenfact;
}
int main()
{
    int iVaalue = 0;
    int iRet = 0 ;

    printf("Enter a number : ");
    scanf("%d",&iVaalue);

    iRet = DisplayDiff(iVaalue);
    printf("The difference is : %d",iRet);
    
    return 0 ;
}