//Input iRow = 5 iCol = 5
/*
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e

*/

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1; i<=iNo1; i++)
    {
        if(i%2!=0)
        {
            for(j=1,ch='a';j <= iNo2;j++,ch++)
            {
                 printf("%c\t",ch);
            }
        }
        else
        {
            for(j = 1;j <= iNo2; j++)
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