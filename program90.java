//Write a program to check whether a number is positive negative or zero.
import java.util.*;

class Logic 
{
    static void Number(int iNo)
    {
        if(iNo==0)
        {
            System.out.println("It is zero");
        }
        if(iNo<0)
        {
            System.out.println("It is Negative");
        }
        else
        {
            System.out.println("It is Positive");
        }
    }
}
public class program90 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number");
        iValue = sobj.nextInt();

        Logic.Number(iValue);

        sobj.close();

    }
    
}
