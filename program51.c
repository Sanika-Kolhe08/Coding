//Write a program which accepts range from user and displays all the numbers in between that range

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt =  0;
    for(iCnt=iStart; iCnt <= iEnd ; iCnt ++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}