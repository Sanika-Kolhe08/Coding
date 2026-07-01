//Accept N numbers from user and return the frequency of even numbers 

#include <stdio.h>
#include <stdlib.h>

int CountEven(int iLength, int Arr[])
{
    int iCnt = 0;
    int iCounter = 0;
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCounter = iCounter + 1;
        }
    }

    return iCounter;

}
int main()
{
    int iSize = 0;
    int *brr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    if(brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d number of elements: ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    iRet = CountEven(iSize,brr);

    printf("The number of even elements are %d",iRet);

    free(brr);

    return 0;
}