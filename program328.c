#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x00000000;        // smallest value of int

    printf("%d\t%x\n",iMask,iMask); 

    return 0;
}