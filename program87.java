//Write a program to print all even numbers upto N
import java.util.*;
class Logic
{
    static void Even(int iNo)
    {
        int iCnt;
        for(iCnt = 0; iCnt <=iNo; iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
}
public class program87 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        System.out.println("The Even numbers are :");

        Logic.Even(iValue);

        sobj.close();
    }
}
