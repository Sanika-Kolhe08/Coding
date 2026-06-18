//Write a program which accepts number from user and print that number of $ * on screen

#include <stdio.h>

void DisplayPattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("$ * ");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}