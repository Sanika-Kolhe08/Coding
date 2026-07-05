//Write a program to print multiplication table of a number
import java.util.*;

class Logic {
    static void multiplication(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
        {
            System.out.println(iNo*iCnt);
        }
        
    }

    
}
public class program85 {

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter a number");
        iValue = sobj.nextInt();

        System.out.println("The multiplication table is : ");

        Logic lobj = new Logic();
        lobj.multiplication(iValue);

        sobj.close();

    }
    
}
