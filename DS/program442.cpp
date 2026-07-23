#include<iostream>
using namespace std;

#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

#pragma pack(1)
class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCL::DoublyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void DoublyCL::Display()
{
    PNODE temp = NULL;
    if(first == NULL && last == NULL)
    {
        return;
    }
    temp = first;
    cout<<" <=> ";
    do
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    } while (temp != first);
    cout<<"\n";
}
int DoublyCL::Count()
{
    return iCount;
}
void DoublyCL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        newn->prev = last;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;
    this->iCount++;
}
void DoublyCL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->prev = last;
        last->next = newn;
        last = newn;
    }
    last->next = first;
    first->prev = last;
    this->iCount++;
}
void DoublyCL::InsertAtPos(int iNo,int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        this->InsertLast(iNo);
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
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;

        this->iCount++;
    }
}
void DoublyCL::DeleteFirst()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = this->first;
        this->first = this->first->next;
        this->first->prev = NULL;
        delete temp;
    }
    last->next = first;
    first->prev = last;
    this->iCount--;
}
void DoublyCL::DeleteLast()
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
        while(temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        last->next = first;
        first->prev = last;
    }
    this->iCount--;
}

void DoublyCL::DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;
        PNODE target = NULL;
        
        for(i = 1;i < iPos-1;i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;
        
        this->iCount--;
    }
}

int main()
{
    DoublyCL sobj;
    int iRet = 0;
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