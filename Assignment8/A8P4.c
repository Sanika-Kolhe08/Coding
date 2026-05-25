//Write a program which accepts temperature in farenheit and returns in Celcius
#include <stdio.h>

double TempCelcius(float fNo)
{
     float temp =0.0;
     temp = (fNo-32)*(5.0/9.0);
     return temp;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0 ;

    printf("Enter temperature in farenheit: ");
    scanf("%f",&fValue);

    dRet= TempCelcius(fValue);
    printf("The temperature in degree celcius is : %lf",dRet);
    return 0 ;
}