//Accept N numbers from user and display all such elements which are divisible by 5

#include <stdio.h>
#include <stdlib.h>

void Divisible(int Arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize; iCnt ++)
    {
        if(Arr[iCnt]%5==0 && Arr[iCnt]%2==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    Brr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Divisible(Brr,iLength);

    free(Brr);

    return 0;
}