//Input iRow = 4 iCol = 3
/*
    1 2 3
    1 2 3 
    1 2 3
    1 2 3
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    int iCnt =0;

    for(i = 0; i< iNo1;i++)
    {
        for(j=0,iCnt=1;j< iNo2; j++,iCnt++)
        {
            printf("%d\t",iCnt);
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