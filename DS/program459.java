// DoublyLL in Java

class node 
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    public node first;
    public int iCount;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

public void Display()
{
    node temp = first;
    System.out.print("null | <=>");
    while(temp != null)
    {
        System.out.print(" | "+temp.data+" | <=>");
        temp = temp.next;
    }
    System.out.println("null");
}
public int Count()
{
    return iCount;
}
public void InsertFirst(int iNo)
{
    node newn = new node(iNo);

    if(first == null)
    {
        first = newn;
        newn.next = null;
        newn.prev = null;
        
    }
    else
    {
        newn.next = first;
        first.prev = newn;
        first = newn;
    }
    this.iCount++;
}
public void InsertLast(int iNo)
{
    node newn = new node(iNo);

    if(first == null)
    {
        first = newn;
        newn.next = null;
        newn.prev = null;
    }
    else
    {
        node temp = first;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newn;
        newn.prev = temp;
        newn.next = null;
    }
    this.iCount++;
}
public void InsertAtPos(int iNo,int iPos)
{
    node temp = null;
    int i = 0;

    if((iPos<1) || (iPos>iCount+1))
    {
        System.out.println("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else 
    {
        node newn = new node(iNo);
        temp = first;
        for(i=1;i<iPos-1;i++)
        {
            temp = temp.next;
        }
        newn.next = temp.next;
        temp.next.prev = newn;
        temp.next = newn;
        newn.prev = temp;
        this.iCount++;
    }
}
public void DeleteFirst()
{
    if(first == null)
    {
        return;
    }
    else if(first.next == null )
    {
        first = null;
    }
    else
    {
        first = first.next;
        first.prev = null;
    }
    this.iCount--;
}
public void DeleteLast()
{
    node temp = null;
    if(first == null)
    {
        return;
    }
    else if(first.next == null)
    {
        first = null;
    }
    else
    {
        temp = first;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.prev.next = null;
    }
    this.iCount--;
}
public void DeleteAtPos(int iPos)
{
    node temp = null;
    int i = 0;

    if((iPos<1) || (iPos>iCount))
    {
        System.out.println("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp = first;
        for(i=1;i<iPos-1;i++)
        {
            temp = temp.next;
        }
        temp.next.next.prev = temp;
        temp.next = temp.next.next;
        this.iCount--;
    }
}
}

class program459
{
    public static void main (String A[])
    {
        DoublyLL sobj = new DoublyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteFirst();
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteLast();
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.InsertAtPos(105,4);
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteAtPos(4);
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

    }
}

/*
------------------------------------------------------------------------------------------------------------
                SinglyLL        SinglyCL        DoublyLL        DoublyCL        Stack       Queue
------------------------------------------------------------------------------------------------------------
C               done            done            done            done            --          --
C++             done            done            done            done            --          --
Java            done            done            done            --              --          --
C++ generic     --              --              --              --              --          --

------------------------------------------------------------------------------------------------------------

 */