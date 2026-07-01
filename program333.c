#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0,iMask = 0,iPos = 0;

    printf("enter number : ");
    scanf("%d",&iNo);

    printf("Enter the bit position\n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iNo = iNo ^ iMask;
    
    printf("updated number : %d\n",iNo); 

    return 0;
}