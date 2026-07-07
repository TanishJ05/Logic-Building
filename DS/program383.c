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
    while(First)        // while(first != NULL).  type 1
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCount = 0;

    while(First)
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

    
    if( NULL == *First )      // LL is empty
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)      // LL is empty
    {
        *First = newn;
    }
    else                    // LL contains at least one node 
    {
        temp = *First;
        while(NULL != temp->next )
        {
            temp = temp->next;
        }
        temp->next = newn;
    } 
}

void InsertAtPos(PPNODE First,int iNo,int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;
    iCount = Count(*First);

    if((iPos < 1)||(iPos > iCount+1))
    {
        printf("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(First,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->data = iNo;
        newn->next = NULL;
        
        temp = *First;

        for(i = 1;i < iPos-1;i++)
        {
            temp = temp-> next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(NULL == *First)                     // LL is empty
    {
        return;
    }
    else if(NULL == (*First)->next)       // LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else                              // LL contains more than 1 node
    {
        temp = *First;
        *First = (*First)->next;
        free(temp);
    }
    
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(NULL == *First)                     // LL is empty
    {
        return;
    }
    else if(NULL == (*First)->next)       // LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else                               // LL contains more than 1 node
    {
        temp = *First;
        while(NULL != temp->next->next)     // type 3
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iCount = 0;
    iCount = Count(*First);

    if((iPos < 1)||(iPos > iCount))
    {
        printf("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iCount)
    {
        DeleteLast(First);
    }
    else
    {
        

    }
}

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

    InsertLast(&head,111);
    InsertLast(&head,121);
    
    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head);
    
    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head,105,4);

    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}