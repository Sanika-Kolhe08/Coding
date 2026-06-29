//Write a program which accepts distance in kilometer and convert it into meter

#include <stdio.h>

int Meters(int iNo)
{
    int Distance = 0;
    Distance = iNo*1000;
    return Distance;
}
int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter the distance in KM");
    scanf("%d",&iValue);

    iRet = Meters(iValue);
    printf("The distance in meter is : %d",iRet);

    return 0;
}