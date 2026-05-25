//Wrte a program ehich accepts radius of a circle from user and gives its area
#include <stdio.h>

#define PI 3.14

double AreaCircle(float fNo)
{
    return PI*fNo*fNo;
}
int main()
{
    float fValue = 0;
    double dRet = 0 ;

    printf("Enter radius of the circle : ");
    scanf("%f",&fValue);

    dRet = AreaCircle(fValue);
    printf("The are of circle is : %lf",dRet);
    return 0 ;
}
