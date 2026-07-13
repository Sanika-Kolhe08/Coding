//Input iRow = 3 iCol = 4
/*
    3   3   3   3   3
    2   2   2   2   2
    1   1   1   1   1
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;

    for(i = iNo1; i>0; i--)
    {
        for(j=1;j<= iNo2; j++)
        {
           printf("%d\t",i);
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