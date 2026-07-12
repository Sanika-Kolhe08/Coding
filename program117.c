//Input iRow = 4 iCol = 4
/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    char ch = '\0';
    char ch1 = '\0';

    for(i = 1; i<= iNo1;i++)
    {
        for(j=1,ch='A',ch1='a';j<= iNo2; j++,ch++,ch1++)
        {
            if(i%2==0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch);
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