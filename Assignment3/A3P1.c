//Write a program which accepts one number from user and prints that number of even number on screen

#include <stdio.h>

void printEven(int iNo)
{
    if(iNo<0)
    {
        return ;
    }

    for(int iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt*2);
    }
}
int main()
{
    int iValue=0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}
