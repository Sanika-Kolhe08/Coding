//Input iRow = 4 iCol = 4
/*
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9

*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;

    for(i = iNo1; i>0; i--)
    {
        if(i%2==0)
        {
            for(j = 1;j <= iNo2*2; j=j+2)
            {
            printf("%d\t",j);
            }
        }
        else
        {
            for(j = 2;j <= iNo2*2; j=j+2)
            {
            printf("%d\t",j);
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