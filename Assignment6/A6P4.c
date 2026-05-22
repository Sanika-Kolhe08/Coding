//Write a program which accepts number from uer and display its table

#include <stdio.h>

void DisplayTable(int iNo)
{
    for(int iCnt = 1; iCnt <= 10 ; iCnt++)
    {
        printf("%d ", iCnt*iNo);
    }
}
int main()
{

    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}