// Write a program to check whether a number is prime or not prime
import java.util.*;

class Logic
{
    static boolean Prime(int iNo)
    {
        int iCnt = 0;
        boolean prime = false;
        for(iCnt = 2; iCnt<iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                prime = true;
            }
        }

        return prime;
    }
}
public class program86 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        int iValue = 0;
        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        bRet = Logic.Prime(iValue);

        if(bRet == true)
        {
            System.out.println("It is not prime");
        }
        else
        {
            System.out.println("It is prime");
        }

        sobj.close();

    }
    
}
