//Accept Character from user and check whether it is digit(0-9) or not

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character: ");
    scanf("%c",&cValue);

    bRet = Check(cValue);

    if(bRet == 1)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}
