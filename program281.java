import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = Arr[i] - 32;   // Error
        }
        return new String(Arr);
    }
      
}

class program281
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null, sRet = null;
        StringX strobj = new StringX();
        

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);

        System.out.println("updated string is : "+sRet);
    }
        
}
