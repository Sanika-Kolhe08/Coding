//Accept one character from user and check that character is vowel or not

#include <stdio.h>

void CheckVowel(int CValue)
{
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')
    {
        printf("%c is a vowel",CValue);
    }

    else if(CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
    {
        printf("%c is a vowel",CValue);
    }
    else
    {
        printf("%c is not a vowel",CValue);
    }
}
int main()
{
    char cValue ='\0';

    printf("Enter a letter: ");
    scanf("%c",&cValue);

    CheckVowel(cValue);
    return 0;
}