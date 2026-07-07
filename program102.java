//Write a program to count how many even and odd digits are present between
//1 to N
import java.util.*;

class Logic 
{
    static void display(int iNo)
    {
        int iDigit = 0;
        int EvenDigit = 0;
        int OddDigit = 0;

        while(iNo!=0)
        {
            iDigit = iNo%10;
            if(iDigit%2==0)
            {
                EvenDigit++;
            }
            else
            {
                OddDigit++;
            }
            iNo = iNo /10;
        }

        System.out.println("The count of even digits are : "+EvenDigit);
        System.out.println("The count of odd digits are : "+OddDigit);
    }
}

public class program102
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        Logic.display(iValue);

        sobj.close();
    }
}
