// Conversion of the Singly Linear Linked list from C to CPP programming language

#include<iostream>
using namespace std;

#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyLL
{
    public:
        PNODE first;

        SinglyLL()
        {
            cout<<"Inside constructor"<<endl;
            this->first = NULL;
        }


};

int main()
{
    SinglyLL sobj;
    return 0;
}