//Write a program which accepts range from user and 
//returns the sum of even number between that range
// range should contain positive numbers only.

#include <stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt =0 ;
    int iSum = 0;
    for(iCnt = iStart;iCnt<=iEnd; iCnt++)
    {
        if(iCnt%2==0)
        {
             iSum = iSum + iCnt;
        }
    }

    return iSum;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the start point : ");
    scanf("%d",&iValue1);

    printf("Enter the end point : ");
    scanf("%d",&iValue2);
     
    if(iValue1 < 0||iValue2 < 0||iValue1>iValue2)
    {
         printf("Invalid Input");
    }
    else{
         iRet = RangeSumEven(iValue1, iValue2);
         printf("The sum of even numbers between the range is : %d",iRet);
    }

    return 0 ;
}