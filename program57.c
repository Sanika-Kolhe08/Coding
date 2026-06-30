//Write a program which accepts a number from user 
// and checks whether that number contaions 0 in it or not

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDgit = 0;

    while(iNo!=0)
    {
        iDgit = iNo % 10;
        if(iDgit == 0)
        {
            return 1;
        }

        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("The number contains zero");
    }
    else{
        printf("The number does not contains zero");
    }



    return 0 ;
}