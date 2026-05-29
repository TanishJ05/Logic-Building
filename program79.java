import java.util.*;

class DigitX
{
    public void DisplayDigit(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt = iNo % 10;
            System.out.println(iCnt);
            iNo = iNo / 10;
            
        }

    }

}
class program79 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        dobj.DisplayDigit(iValue);

    }
    
}