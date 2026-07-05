import java.util.*;

class Logic 
{
    static int Minimum(int iNo1, int iNo2, int iNo3) 
    {
        int iMin = iNo1;
        if(iNo1>iNo2)
        {
            iMin = iNo2;
        }
   
        if(iNo3<iMin)
        {
            iMin = iNo3;
        }
        return iMin;
    }
}
public class program84 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0,iValue2 = 0, iValue3 = 0;
        int iRet = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();
        
        System.out.println("Enter third number : ");
        iValue3 = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.Minimum(iValue1, iValue2, iValue3);

        System.out.println("The minimum of three numbers is : "+iRet);


    }
    
}
