//Write a program to find the largest digit of a given number
import java.util.*;

class Logic 
{
    static int display(int iNo)
    {
        int iRet = 0;
        int iMax = 0;

        while (iNo!=0) {
            iRet = iNo %10;
            if(iRet > iMax)
            {
                iMax = iRet;
            }
            iNo = iNo/10;
        }

        return iMax;
    
    }
}

public class program99
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        iRet = Logic.display(iValue);

        System.out.println("Largest digit in a given number is: "+iRet);
    
        sobj.close();
    }
}
