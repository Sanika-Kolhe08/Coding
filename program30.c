//Write a program which accepts number from uer 
//and display its table in reverse order

#include <stdio.h>

void DisplayTable(int iNo)
{
    for(int iCnt = 10; iCnt >=1 ; iCnt--)
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