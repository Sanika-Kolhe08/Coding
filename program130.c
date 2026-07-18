//Accept number ofrows and number of columns from user and display below pattern

//Input : iRow = 4 , iCol =4

//Output : 

/* 
    1   2   3   4
    1   *   *   4
    1   *   *   4
    1   2   3   4
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j=0;
    int iCnt = 0;
    for(i = 0; i<iRow;i++)
    {
        for(j = 0,iCnt = 1;j<iCol;j++,iCnt++)
        {
            if(i==0 || i == iRow-1 || j==0 || j == iCol-1)
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns: \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}