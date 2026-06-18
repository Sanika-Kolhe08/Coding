//Write a program which accepts number from user and prints its number line

#include <stdio.h>

void display(int iNo)
{
    for(int iCnt = - iNo; iCnt<= iNo ; iCnt ++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue = 0 ;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}