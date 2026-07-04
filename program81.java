//Write a program to find the sum of digits of a number
import java.util.*;

class Logic
{
    public static void SumOfDigits(int iNo)
    {
        int iSum = 0;
        while(iNo!=0)
        {
            iSum = iSum + (iNo%10);
            iNo = iNo/10;
        }

        System.out.println("The sum of digits of the given number is : "+iSum);
    }
}
public class program81 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter a number: ");
        iValue=sobj.nextInt();

        Logic lobj = new Logic();
        lobj.SumOfDigits(iValue);

        sobj.close();
    }
}