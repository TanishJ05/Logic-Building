import java.util.Scanner;

class program48
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        nobj.SumFactors(iValue);
       
    }
}
class NumberX
{
    public void SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Summation of factors is : "+iSum);
    }
}

// Time Complexity = O(N/2)
// Where N is the input number  N>=0