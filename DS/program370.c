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
{}

int Count(PNODE First)
{
    return 0;
}

void InsertFirst(PPNODE First,int iNo)
{}

void InsertLast(PPNODE First,int iNo)
{}

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
    
    return 0;
}