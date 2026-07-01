//Accept N numbers from user and accept one number from user and check the frequency of that number

#include <stdio.h>
#include <stdlib.h>

int Count(int Arr[],int iLength, int iFind)
{
    int iCnt = 0;
    int Counter = 0;
   ;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iFind)
        {
            Counter++;
        }
    }

    return Counter;

}
int main()
{
    int iSize = 0;
    int iNo = 0;
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

    printf("Enter the element which you want to count : ");
    scanf("%d",&iNo);

    iRet = Count(brr,iSize,iNo);
    printf("The frequency of element is %d",iRet);

    free(brr);

    return 0;
}