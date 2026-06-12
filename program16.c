//Write a program which accepts number from user and gives the multiplication of those factors.
#include <stdio.h>

void displayMultiplication(int iNo)
{
    int iFact = 1;
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFact=iFact*iCnt;
        }
    }
            
    printf(" %d",iFact);

}
int main()
{
    int iValue=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    displayMultiplication(iValue);

    return 0;
}