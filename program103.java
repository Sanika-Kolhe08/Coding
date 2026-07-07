//Write a program to display all the factors of a given number

import java.util.*;

class Logic 
{
    static void Factors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                System.out.println(iCnt);
            }
        }

    }
}

public class program103
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        System.out.println("Factors are :");
        Logic.Factors(iValue);

        sobj.close();
    }
}
