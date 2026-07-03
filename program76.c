//Accept N numbers from user
//and return the largest number

#include <stdio.h>
#include <stdlib.h>

int Largest(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax  = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;

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

    iRet = Largest(brr,iSize);

    printf("The largest element is : %d",iRet);

    free(brr);

    return 0 ;
}