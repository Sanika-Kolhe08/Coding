//Write a program which accepts width and height of a rectangle and calculate its area.
#include <stdio.h>

int AreaRectangle(int iNo1, int iNo2)
{
    int Area = 0;
    Area = iNo1*iNo2;
    return Area;
}
int main()
{
    int iHeight = 0;
    int iWidth = 0;
    int iRet = 0;

    printf("Enter the height of rectangle: ");
    scanf("%d",&iHeight);

    printf("Enter the width of rectangle: ");
    scanf("%d",&iWidth);

    iRet = AreaRectangle(iHeight,iWidth);

    printf("Area of the rectangle is : %d",iRet);

    return 0 ;
}