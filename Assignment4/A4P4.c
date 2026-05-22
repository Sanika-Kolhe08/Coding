//Write a program which accepts a number from user and returns the summation of all its non factors

#include <stdio.h>

void SumNonFactors(int iNo)
{
    int iSum= 0;
    for(int iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }

    printf("Sum of all the non factors is : %d",iSum);
}
int main()
{
    int iValue= 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    SumNonFactors(iValue);
    return 0;
}