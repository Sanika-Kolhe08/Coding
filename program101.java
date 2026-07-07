//Write a program to find product of digits of a number

import java.util.*;

class Logic 
{
    static int Product(int iNo)
    {
        int iProduct = 1;
        int iDigit = 0;
        while(iNo!=0)
        {
            iDigit = iNo%10;
            iProduct = iProduct*iDigit;
            iNo = iNo /10;
        }
        return iProduct;
    }
}

public class program101
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = Logic.Product(iValue);

        System.out.println("The product of all digits of the number is : "+ iRet);

        sobj.close();
    }
}