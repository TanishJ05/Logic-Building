import java.util.*;

class program146
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        int Brr[] = {10,20,30,40,50};

        System.out.println("Array Elements before function call : ");

        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]) ;
        }
        System.out.println("Elements of the Array after the function call : ");

        ArrayX.Update(Brr);
        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]) ;
        }
        
        Brr = null;
        System.gc();

    }
}
class ArrayX
{
    public static void Update(int Arr[])
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < 5; iCnt++)
            {
                Arr[iCnt]++;
            }
            
        }
}