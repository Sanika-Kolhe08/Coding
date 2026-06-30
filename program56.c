//Write a program which accept a number and display its digit in reverse order

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
    

}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
 
    DisplayDigits(iValue);

    return 0;
}