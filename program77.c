//Accept N numbers from user
//and return the smallest number

#include <stdio.h>
#include <stdlib.h>

int Smallest(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin  = 0;
    iMin = Arr[iCnt];

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin= Arr[iCnt];
        }
    }

    return iMin;

}
int main()
{
    int *brr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the total number of elements : ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements : ");
    for(iCnt = 0 ; iCnt <iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    iRet = Smallest(brr,iSize);

    printf("The smallest element is : %d",iRet);

    free(brr);

    return 0 ;
}