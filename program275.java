import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length ;i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;   
    } 
    public int CountSmall(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length ;i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
        }
        return iCount;   
    } 
    public int CountDigits(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length ;i++)
        {
            if(Arr[i] >= '0' && Arr[i] <= '9') 
            {
                iCount++;
            }
        }
        return iCount;   
    } 
    public int CountSpace(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length ;i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }
        return iCount;   
    } 
    public int CountSpecial(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length ;i++)
        {
            if( ( Arr[i] >= '!' && Arr[i] <= '/' ) || 
                ( Arr[i] >= ':' && Arr[i] <= '@' ) || 
                ( Arr[i] >= '[' && Arr[i] <= '`' ) || 
                ( Arr[i] >= '{' && Arr[i] <= '~' ) 
            ) 
            {
                iCount++;
            }
        }
        return iCount;   
    } 
      
}

class program275
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of Capital Characters : "+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small Characters : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Spaces are : "+iRet);

        iRet = strobj.CountSpecial(data);
        System.out.println("Number of Special characters are : "+iRet);
    }
}
