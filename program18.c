//Write a program which accepts a number from user and dispaly its non factors

#include <stdio.h>

void displayNonfactors(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d ",iCnt); 
        }
    }
}
int main()
{
    int iValue =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    displayNonfactors(iValue);
    return 0;
}