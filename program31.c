//Write a program which accepts a number from user and prints following pattern
/*
Input: 5
Output : * * * * * # # # # #
*/

#include <stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("* ");
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("# ");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}

//Time complexity : O(n)