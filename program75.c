//Accept N numbers from user
//and return product of all odd elements

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct  = 1;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }

    return iProduct;

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

    iRet = Product(brr,iSize);

    printf("The product of all odd elements is : %d",iRet);

    free(brr);

    return 0 ;
}