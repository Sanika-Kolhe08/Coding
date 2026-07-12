//Input iRow = 4 iCol = 4
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1; i<= iNo1;i++)
    {
        for(j=0,ch='A';j< iNo2; j++,ch++)
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