//Write a program to count total number of factors of a given program
import java.util.*;

class Logic 
{
    static int Factors(int iNo)
    {
        int iCnt = 0;
        int iTotal = 0;
        for(iCnt = 1; iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iTotal++;
            }
        }

        return iTotal;

    }
}

public class program104
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = Logic.Factors(iValue);

        System.out.println("Total numbers of factors are :"+iRet);

        sobj.close();
    }
}
