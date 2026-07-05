//Write a program to check whether a given year is a leap year or not
import java.util.*;

class Logic 
{
    static boolean LeapYear(int iNo)
    {
    if(iNo%4 ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
}

public class program91
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iYear = 0;
        boolean bRet = false;

        System.out.println("Enter a year : ");
        iYear = sobj.nextInt();

        bRet = Logic.LeapYear(iYear);
        
        if(bRet == true)
        {
            System.out.println("It is a leap year");
        }
        else
        {
            System.out.println("It is not a leap year");
        }

        sobj.close();
    }
}