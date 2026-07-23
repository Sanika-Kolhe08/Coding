//Accept Division of student from user and depends on the division display exam timing.
// There are four divsions in school as A,B,C,D.
// Exam of Division A at 7 am, B at 8:30 AM , C at 9.20 AM and D at 10:30 AM.
// Application should be case insensitive

#include <stdio.h>


void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7am");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30 am");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9:20 am");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10:30 am");
    }
    else
    {
        printf("No such Division exits!!!");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
