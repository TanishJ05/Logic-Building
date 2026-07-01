#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0,iMask = 0;

    printf("enter number : ");
    scanf("%d",&iNo);
    iMask = 0x8000000;              // position is 28
    iNo = iNo ^ iMask;
    printf("updated number : %d\n",iNo); 

    return 0;
}