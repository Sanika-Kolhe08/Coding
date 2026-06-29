//Write a program which accept range from the user and 
//return the addition of the numbers between that range
//Range should contain positive value only

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0 ;
    int iSum = 0;
    for(int iCnt = iStart; iCnt <= iEnd ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
int main()
{  
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the start point:");
    scanf("%d",&iValue1);

    printf("Enter the end point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("The sum of all the numbers is : %d",iRet);
    
    return 0;
}