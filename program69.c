//Accept N numbers from user and return frequency of 11 from it.

#include <stdio.h>
#include <stdlib.h>

int Count(int Arr[],int iLength)
{
    int iCnt = 0;
    int Counter = 0;
   ;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            Counter++;
        }
    }

    return Counter;

}
int main()
{
    int iSize = 0;
    int iRet = 0;
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

    iRet = Count(brr,iSize);
    printf("The frequency of 11 is %d",iRet);

    free(brr);

    return 0;
}