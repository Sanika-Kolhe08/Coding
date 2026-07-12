//Input iRow = 3 iCol = 4
/*
    *   #   *   #
    *   #   *   #
    *   #   *   #
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;

    for(i = 0; i< iNo1;i++)
    {
        for(j=0;j< iNo2; j++)
        {
            if(j%2==0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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