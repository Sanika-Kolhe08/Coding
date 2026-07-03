//Accept N numbers from user and accept one element from user and return the index of last occurence of that number

#include <stdio.h>
#include <stdlib.h>


int Index(int Arr[], int iLength, int iFind)
{
    int iCnt = 0;
    int iIndex = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]==iFind)
        {
            iIndex = iCnt;
        }
    }

    return iIndex;

}
int main()
{
    int *brr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int iNo = 0;

    printf("Enter the total number of elements : ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements : ");
    for(iCnt = 0 ; iCnt <iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    printf("Enter a number: ");
    scanf("%d",&iNo);

    iRet = Index(brr,iSize,iNo);
    
    printf("The index of the last occurence of that number is : %d",iRet);

    free(brr);

    return 0 ;
}