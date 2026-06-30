//Write a program ehich accepts number from user
//and count the frequency of such numbers which are less than 6

#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo= iNo/10;
    }

    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("The frequency of digits less than 6 is: %d",iRet);


    return 0;
}