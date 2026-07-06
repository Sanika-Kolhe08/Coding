//Write a program to display the grade of the students based on the marks

import java.util.*;

class Logic 
{
    static void Grade(int iNo)
    {
        if(iNo >= 90)
        {
            System.out.println("Grade A+");
        }
        else if(iNo >= 80)
        {
            System.out.println("Grade A");
        }
        else if(iNo >= 70)
        {
            System.out.println("Grade B+");
        }
        else if(iNo >= 60)
        {
            System.out.println("Grade B");
        }
        else if(iNo >= 50)
        {
            System.out.println("Grade c");
        }
        else if(iNo>100)
        {
            System.out.println("Invalid Input!!!");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

public class program92
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iMarks = 0;

        System.out.println("Enter Marks : ");
        iMarks = sobj.nextInt();

        Logic.Grade(iMarks);

        sobj.close();
    }
}