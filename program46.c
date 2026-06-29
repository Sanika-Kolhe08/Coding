//Write a program which accepts the radius aand returns the area of circle

#include <stdio.h>>

#define PI 3.14;
int CircleArea(int iNo)
{
    int iArea = 0;
    iArea = PI(iNo*iNo);

    return iArea;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the radius of circle : ");
    scanf("%d",&iValue);

    iRet = CircleArea(iValue);

    printf("Area of circle is : %d",iRet);


    return 0;
}