#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xffffffff;

    printf("Before : %X\n",iMask);

    iMask = ~iMask;
    
    printf("After : %d\n",iMask);

    return 0;
}