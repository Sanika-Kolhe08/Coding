//Input iRow = 4 iCol = 4
/*
    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7

*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    int inum =0;

    for(i = 1;i<=iNo1;i++)
    {
        for(j = 1,inum = i;j<= iNo2; j++,inum++)
        {
           printf("%d\t",inum);
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