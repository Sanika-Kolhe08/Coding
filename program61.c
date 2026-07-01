//Accept N numbers from user and return the difference between summation of even elements and odd elements

#include <stdio.h>
#include <stdlib.h>

int Diiference(int Arr[],int iSize)
{
    int iCnt =0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int Diff = 0;
    for(iCnt= 0 ;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    Diff = iEvenSum - iOddSum;

    return Diff;
}
int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    Brr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Diiference(Brr,iLength);

    printf("Difference is : %d",iRet);

    free(Brr);

    return 0;
}