//Accept Character from user and check whether it is capital or not

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
        printf("It is a Capital alphabet");
    }
    else
    {
        printf("It is not a Capital alphabet");
    }

    return 0;
}
