#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0,iMask = 0x44,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}