// Doubly LL conversion
#include<iostream>
using namespace std;

#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
    struct node *prev;          //$
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside constructor"<<endl;
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = NULL;
    temp = this->first;

    cout<<"\nNULL | <=> ";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<< "| <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int DoublyLL::Count()
{
    return this->iCount;
}

void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL; 

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}

void DoublyLL::InsertLast(int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL; 

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }   
        temp->next = newn;
        newn->prev = temp;
    }
    this->iCount++;
}

void DoublyLL::InsertAtPos(int iNo,int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;

    if((iPos < 1 ) || (iPos > iCount+1))
    {
        cout<<"Invalid Position"<<endl;
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
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;
        temp = this->first;

        for(i = 1;i < iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
    this->iCount++;
}

void DoublyLL::DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL; 
    }
    this->iCount--;
}

void DoublyLL::DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    this->iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    int i = 0;

    if((iPos < 1 ) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
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
        temp = this->first;

        for(i = 1;i < iPos-1;i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        this->iCount--;
    }
}

int main()
{
    int iRet = 0;
    DoublyLL sobj;

    sobj.InsertFirst(101);
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    sobj.DeleteLast();
    
    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    sobj.InsertAtPos(55,3);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    sobj.DeleteAtPos(3);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;


    return 0;
}