//Write a program which accepts a number from user and returns the multiplication of its digit
#include <stdio.h>

int CountMultiplication(int iNo)
{
    int iDigit = 0;
    int Multiplication = 1;
    while(iNo != 0)
    {
        iDigit = iNo% 10 ;

        Multiplication = Multiplication * iDigit;

        iNo = iNo/10;
    }

    return Multiplication;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountMultiplication(iValue);

    printf("The multiplication of the digits is : %d",iRet);

    return 0;
}