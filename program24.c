//Write a program which accepts N number from user and prints all the odd number upto N

#include <stdio.h>

void DisplayOdd(int iNo){

    for(int iCnt = 1; iCnt<=iNo;iCnt++ )
    {
        if((iCnt % 2)!=0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    DisplayOdd(iValue);
}