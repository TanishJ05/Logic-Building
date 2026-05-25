import java.util.Scanner;

class program67
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is a Prime number");
        }
        else
        {
            System.out.println("It is not a Prime number");
        }
       
    }
}
class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 2 ; iCnt <= (iNo / 2) ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                return false;         // Bad programming 
            }
            
        }
        return true;
    }
}

