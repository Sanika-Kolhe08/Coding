//Accept N numbers from user and accept one element from user and check that element is present or not.

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iFind)
{
    int iCnt = 0;
    BOOL iCheck = FALSE;
    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]==iFind)
        {
            iCheck = TRUE;
            break;
        }
    }

    return iCheck;

}
int main()
{
    int *brr = NULL;
    int iSize = 0;
    int iCnt = 0;
    BOOL bRet = FALSE;
    int iNo = 0;

    printf("Enter the total number of elements : ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements : ");
    for(iCnt = 0 ; iCnt <iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    printf("Enter a number to check the presence : ");
    scanf("%d",&iNo);

    bRet = Check(brr,iSize,iNo);
    if(bRet == 1)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(brr);

    return 0 ;
}