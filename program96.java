//Write a program to find the sum of all even numbers upto N

import java.util.*;

class Logic 
{
    static int Sum(int iNo)
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(iCnt%2==0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
    
    }
}

public class program96
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        iRet = Logic.Sum(iValue);

        System.out.println("The sum of all even numbers is : "+iRet);
    
        sobj.close();
    }
}

