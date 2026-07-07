#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        iCount++;
        First = First->next;
    }
    return iCount;
}

void InsertFirst(PPNODE First,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)      // LL is empty
    {
        *First = newn;
    }
    else                    // LL contains at least one node 
    {
        newn->next = *First;
        *First = newn;
    }                   
}

void InsertLast(PPNODE First,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)      // LL is empty
    {
        *First = newn;
    }
    else                    // LL contains at least one node 
    {

    } 
}

void InsertAtPos(PPNODE First,int iNo,int iPos)
{}

void DeleteFirst(PPNODE First)
{}

void DeleteLast(PPNODE First)
{}

void DeleteAtPos(PPNODE First,int iPos)
{}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}