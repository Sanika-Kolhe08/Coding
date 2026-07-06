//Write a program to print numbers from N to 1 in reverse order
import java.util.*;

class Logic 
{
    static void Display(int iNo)
    {
        for(int iCnt = iNo; iCnt > 0; iCnt--)
        {
           System.out.println(iCnt);
        }
    
    }
}

public class program97
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        System.out.println("Reverse order is :");
        Logic.Display(iValue);
    
        sobj.close();
    }
}

