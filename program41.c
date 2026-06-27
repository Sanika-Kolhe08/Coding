//Write a program which accepts N number from user and return the count of even digits

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
     while(iNo!=0)
     {
        iDigit = iNo % 10;
        if(iDigit%2 ==0)
        {
            iCounter++;
        }

        iNo = iNo / 10;
     }
     return iCounter;
}

int main()
{
    int iValue=0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The total number of even digits are : %d",iRet);

    return 0;
}