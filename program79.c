//Accept N numbers from user
//and display all such numbers which contains 3 digits in it

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCounter = 0;
        int iTemp = Arr[iCnt];

        while(Arr[iCnt]!=0)
        {
            iCounter++;
            Arr[iCnt] = Arr[iCnt]/10;
        }

        if(iCounter==3)
        {
            printf("%d ",iTemp);
        }
    }

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

    Display(brr,iSize);

    free(brr);

    return 0 ;
}