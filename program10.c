//Accept number from user and check whether the number is Even Or Odd
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int iNo)
{
    if((iNo%2)==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int iValue =0 ;
    BOOL bRet = FALSE;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet==TRUE)
    {
        printf("It is Even Number");
    }
    else{
        printf("It is Odd Number");
    }

    return 0;
}