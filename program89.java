//Write a program to find sum of even and odd digits in a number separately
import java.util.*;
class Logic
{
    static int Sum(int iNo)
    {
        int iEvenSum = 0 ;
        int iRet = 0;
        while(iNo!=0)
        {
            iRet = iNo%10;
            if(iRet%2==0)
            {
                iEvenSum = iEvenSum + iRet;
            }
            iNo = iNo/10;
        }
        return iEvenSum;
    }


}

class Demo {
    static int Sum(int iNo)
    {
        int iOddSum = 0;
        int iRet = 0;
        while(iNo!=0)
        {
            iRet = iNo%10;
            if(iRet%2!=0)
            {
               iOddSum = iOddSum + iRet;
            }
            iNo = iNo/10;
        }
        return iOddSum;
    }

    
}

public class program89 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;
        int iRet1 =0;
        
        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = Logic.Sum(iValue);

        System.out.println("The sum of even digits is : "+iRet);

        iRet1=Demo.Sum(iValue);

        System.out.println("The sum of odd digits is : "+iRet1);

        sobj.close();

    }
    
}
