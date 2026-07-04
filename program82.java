import java.util.*;


class Logic {
    public static boolean checkPalindrome(int iNo)
    {
        int iRet = 0;
        int iMirror = 0;
        int iTemp = iNo;
        
        while(iNo!=0)
        {
            iRet =  iNo%10;
            iMirror = iMirror*10 + iRet;
            iNo = iNo / 10;

        }
        if(iTemp == iMirror)
        {
            return true;
        }
        else
        {
            return false;
        }


    }

    
}

public class program82 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0 ;
        boolean bRet = false;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.checkPalindrome(iValue);

        if(bRet == true)
        {
            System.out.println("It is Palindrome");
        }
        else
        {
            System.out.println("It is not a Palindrome");
        }

        sobj.close();
    }
}

