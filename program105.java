//Write a program to print all numbers from 1 to N
//that are divisible by both 2 and 3

import java.util.*;

class Logic 
{
    static void Factors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0 && iCnt%3==0)
            {
                System.out.println(iCnt);
            }
        }

    }
}

public class program105
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        System.out.println("The numbers divisible by 2 and 3 are:");
        Logic.Factors(iValue);

        sobj.close();
    }
}
