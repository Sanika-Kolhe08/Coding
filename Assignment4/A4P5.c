//Write a program which accepts number from user
//And returns the difference of summation of factors nad non factors

#include <stdio.h>

void FactDiff(int iNo)
{
    int Fact = 0;
    int NonFact = 0;

    for(int iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            Fact = Fact + iCnt;
        }

        else{
            NonFact = NonFact + iCnt;
        }
    }
    printf("%d \n",Fact);
    printf("%d \n ",NonFact);
    int Diff = Fact - NonFact;
    printf("The difference of summation of factors and non-factors is : %d",Diff);
}
int main()
{
    int iValue =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    FactDiff(iValue);

    return 0;
}