//Accept N numbers from user and return the difference between frequency of even numbers and odd numbers

#include <stdio.h>
#include <stdlib.h>

int CountDiff(int Arr[],int iLength)
{
    int iCnt = 0;
    int EvenCounter = 0;
    int OddCounter = 0;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            EvenCounter++;
        }
        else
        {
            OddCounter++;
        }
    }

    return EvenCounter - OddCounter;

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

    iRet = CountDiff(brr,iSize);
    printf("The difference between even and odd elements is : %d",iRet);

    free(brr);

    return 0;
}