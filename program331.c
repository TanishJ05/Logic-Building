#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0,iMask = 0;

    printf("enter number : ");
    scanf("%d",&iNo);
    iMask = 0x400;              // position is 11
    iNo = iNo ^ iMask;
    printf("updated number : %d\n",iNo); 

    return 0;
}