//Write a program which accepts n from user and prints its multiplies of 5

#include <stdio.h>

void DisplayMultiplication(int iNo){

    for(int iCnt = 1; iCnt <= iNo; iCnt++){

        printf("%d ",iCnt*5);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    DisplayMultiplication(iValue);

    return 0;
}