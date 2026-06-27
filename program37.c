//Wrte a program ehich accepts width and height of a rectangle from user and gives its area
#include <stdio.h>

double AreaRectangle(float fNo1, float fNo2)
{
    return fNo1*fNo2;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0 ;

    printf("Enter width of a rectangle : ");
    scanf("%f",&fValue1);

    printf("Enter height of a rectangle : ");
    scanf("%f",&fValue2);

    dRet = AreaRectangle(fValue1,fValue2);
    printf("The area of rectangle is : %lf",dRet);
    return 0 ;
}