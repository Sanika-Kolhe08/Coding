//Write a program which accepts area in square feet and convert it into square meter.
//1 square feet = 0.0929 square meter
#include <stdio.h>

double SquareMeter(float fNo)
{
     float meter =0.0;
     meter = fNo*0.0929;
     return meter;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0 ;

    printf("Enter Square feet value : ");
    scanf("%f",&fValue);

    dRet= SquareMeter(fValue);
    printf("The total square meter is : %lf",dRet);
    return 0 ;
}