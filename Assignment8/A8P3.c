//Wrte a program which accepts distance in kilometer and returns in meter
#include <stdio.h>

int KM(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue = 0.0;
    int iRet = 0.0 ;

    printf("Enter Distance in Km: ");
    scanf("%d",&iValue);

    iRet = KM(iValue);
    printf("The Distance in meter is : %d",iRet);
    return 0 ;
}