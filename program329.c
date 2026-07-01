#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFFFFF;        // largest value of int

    printf("%u\t%x\n",iMask,iMask); 

    return 0;
}