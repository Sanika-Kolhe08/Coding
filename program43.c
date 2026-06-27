//Write a program which accepts a number from user and return the count of digits in betwwen 3 and 7

#include <stdio.h>

int CountBetween(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit>3 && iDigit<7)
        {
            iCounter++;
        }
        iNo = iNo/10;
    }

    return iCounter;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = CountBetween(iValue);

    printf("The count of digits between 3 and 7 are : %d",iRet);

    return 0;
}