//Accept N numbers from user
//and accept range 
//Display all the elements in between that range

#include <stdio.h>
#include <stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(iStart <=  Arr[iCnt]&& Arr[iCnt]<= iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }

}
int main()
{
    int *brr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iNo1 = 0,iNo2 =0;

    printf("Enter the total number of elements : ");
    scanf("%d",&iSize);

    brr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements : ");
    for(iCnt = 0 ; iCnt <iSize; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    printf("Enter a starting point of the range: ");
    scanf("%d",&iNo1);

    printf("Enter the ending point of the range: ");
    scanf("%d",&iNo2);

    Range(brr,iSize,iNo1,iNo2);

    free(brr);

    return 0 ;
}