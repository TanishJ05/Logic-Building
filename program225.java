/*
    iRow = 6
    iCol = 6

    a	
    a	b	
    a	b	c	
    a	b	c	d	
    a	b	c	d	e	
    a	b	c	d	e	f
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        // filter for Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid parameters ");
            System.out.println("Number of rows and columns should be same ");
            return;
        }
        for(i = 1;i <= iRow ; i++)
        {
            for(j = 1,ch = 'a'; j <= i; j++,ch++)
            {                                         
                System.out.print(ch+"\t");   
            }
            System.out.println();
        }
    }
}
class program225   
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0,iValue2 = 0;

        System.out.println("Enter the number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}