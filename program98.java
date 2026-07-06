//Write a program to check whether a number is perfect or not
import java.util.*;

class Logic 
{
    static boolean perfect(int iNo)
    {
        int iCnt =0;
        int iSum = 0;
        for(iCnt = 1; iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class program98
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        bRet = Logic.perfect(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is a perfect number");
        }
        else
        {
            System.out.println("It is not a perfect number");
        }

        sobj.close();
    }
}