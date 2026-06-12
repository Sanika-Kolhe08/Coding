//Write a program which accepts a number from the user and display its factors in decreasing order.

#include <stdio.h>

void displayFactors(int iNo)
{
    for(int iCnt=iNo;iCnt>=1;iCnt--){
        if(iNo%iCnt==0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    displayFactors(iValue);
    return 0;
}