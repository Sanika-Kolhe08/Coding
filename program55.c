//Write a program which accepts range from user
//and returns all numbers between that range in reverse order

#include <stdio.h>

void DisplayReverse(int iStart , int iEnd)
{
    int iCnt = 0 ;
    int iSum = 0;
    for(iCnt = iEnd;iCnt>=iStart; iCnt--)
    {
        printf("%d ",iCnt);
    }

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
     
    if(iValue1>iValue2)
    {
         printf("Invalid Input");
    }
    else{
         DisplayReverse(iValue1, iValue2);
    }

    return 0 ;
}   