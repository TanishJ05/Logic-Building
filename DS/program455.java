class node 
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

public void Display()
{
    node temp = first;
    while(temp != null)
    {
        System.out.print(" | "+temp.data+" | ->");
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
    }
    else
    {
        newn.next = first;
        first = newn;
    }
    this.iCount++;
}
public void InsertLast(int iNo)
{
    node newn = new node(iNo);
    node temp = null;

    if(first == null)
    {
        first = newn;
    }
    else
    {
        temp = first;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newn;
    }
    this.iCount++;
}
public void InsertAtPos(int iNo,int iPos)
{}
public void DeleteFirst()
{}
public void DeleteLast()
{}
public void DeleteAtPos(int iPos)
{}
}

class program455
{
    public static void main (String A[])
    {
        SinglyLL sobj = new SinglyLL();
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

    }
}