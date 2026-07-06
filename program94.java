//Write a program to print each digit of a number separetly
import java.util.*;

class Logic 
{
    static void display(int iNo)
    {
        int iRet = 0;

        while (iNo!=0) {
            iRet = iNo %10;

            System.out.print(iRet+"\t");
            iNo = iNo/10;
        }
    
    }
}

public class program94
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        Logic.display(iValue);
    
        sobj.close();
    }
}
