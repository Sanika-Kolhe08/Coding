//Write a program which accepts range from user and display all the even numbers between that range 

#include <stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt =0 ;
    for(iCnt = iStart;iCnt<=iEnd; iCnt++)
    {
        if(iCnt%2==0)
        {
             printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the start point : ");
    scanf("%d",&iValue1);

    printf("Enter the end point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0 ;
}