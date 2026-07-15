//Input iRow = 4 iCol = 4
/*
    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    int iNum = 1;

    for(i = iNo1; i>0; i--)
    {
        for(j = 1;j<= iNo2; j++)
        {
           printf("%d\t",iNum);
           iNum++;
           if(iNum > 9)
            {
            iNum = 1;
            }
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 =0;

    printf("Enter rows : ");
    scanf("%d",&iValue1);

    printf("Enter cols : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}