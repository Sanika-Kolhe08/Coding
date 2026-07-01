//Accept N numbers from user abd check whether that elements contains 11 in it or not

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    BOOL item = FALSE;
   ;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            item = TRUE;
            break;
        }
    }

    return item;

}
int main()
{
    int iSize = 0;
    BOOL bRet = FALSE;
    int iCnt = 0;
    int *brr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    if(brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
 
    printf("Enter the elements : ");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    bRet = Check(brr,iSize);
    if(bRet == 1)
    {
        printf("Element is present");
    }
    else{
        printf("Element is not present");
    }

    free(brr);

    return 0;
}