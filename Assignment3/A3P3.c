//Write a program which accepts number from user and prints even factors of that
#include <stdio.h>

void factors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)==0 &&(iCnt%2==0))
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter a Number:");
    scanf("%d",&iValue);

    factors(iValue);
    return 0;
}