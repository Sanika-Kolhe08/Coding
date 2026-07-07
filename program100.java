//Write a program to find smallest digit in a given number

import java.util.*;

class Logic 
{
    static int display(int iNo)
    {
        int iRet = 0;
        int iMin = iNo%10;

        while (iNo!=0) {
            iRet = iNo %10;
            if(iRet < iMin)
            {
                iMin = iRet;
            }
            iNo = iNo/10;
        }

        return iMin;
    
    }
}

public class program100
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        iRet = Logic.display(iValue);

        System.out.println("Smallest digit in a given number is: "+iRet);
    
        sobj.close();
    }
}

