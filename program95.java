//Write a program to calculate power of a number using loops.

import java.util.*;

class Logic 
{
    static int display(int iNo,int iPower)
    {
        int iTemp = iNo;
        for(int iCnt =1; iCnt < iPower; iCnt++)
        {
            iTemp = iTemp * iNo ;
        }

        return iTemp;
    
    }
}

public class program95
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter the power: ");
        iNo = sobj.nextInt();

        iRet = Logic.display(iValue,iNo);

        System.out.println("The answer is : "+iRet);
    
        sobj.close();
    }
}
