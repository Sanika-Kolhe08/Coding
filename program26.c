//Write a program which accepts a number from user
//If number is less than 50 print small
//If number is greater than 50 and less than 100 then print medium
//And if it is greater than 100 print large

#include <stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf ("Less");
    }

    
    else if(iNo>=50 && iNo<100)
    {
        printf ("Medium");
    }

    
    else if(iNo>=100)
    {
        printf ("Large");
    }
}
int main(){
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}