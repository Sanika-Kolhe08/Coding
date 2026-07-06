//Write a program to check whether a number is divisible by 5 and 11 or not 

import java.util.*;

class Logic 
{
    static boolean divisible(int iNo)
    {
    if(iNo%5 ==0 && iNo%11 ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
}

public class program93
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        bRet = Logic.divisible(iValue);
        
        if(bRet == true)
        {
            System.out.println("Number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not divisible by 5 and 11");
        }

        sobj.close();
    }
}