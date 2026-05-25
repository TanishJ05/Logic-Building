// Type 2
import java.util.Scanner;
class program40
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Divisible by both 3 and 5");
        }
        else
        {
            System.out.println("Not Divisible by both 3 and 5");
        }

    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);         // Error : Non static method cannot be referenced from a static context

        



    }
}