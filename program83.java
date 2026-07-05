//Write a prgram to find maximum of two numbers

import java.util.*;

class Logic{
    static int CheckMax(int iNo1, int iNo2)
    {
        if(iNo1>iNo2)
        {
            return iNo1;
        }

        else
        {
            return iNo2;
        }
    }
}
public class program83 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0,iValue2 =0;
        int iRet = 0;

        System.out.println("Enter first number");
        iValue1= sobj.nextInt();

        System.out.println("Enter second number");
        iValue2= sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.CheckMax(iValue1, iValue2);

        System.out.println("The maximum of the two numbers is: "+iRet);

        sobj.close();


    }
}
