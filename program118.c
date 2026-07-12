//Input iRow = 3 iCol = 4
/*
    A   A   A   A
    B   B   B   B
    C   C   C   C
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1,ch='A'; i<= iNo1;i++,ch++)
    {
        for(j=1;j<= iNo2; j++)
        {
           printf("%c\t",ch);
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