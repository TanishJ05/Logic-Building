#include<stdio.h>

typedef unsigned int UINT;
// position is 3 and 8
int main()
{
    UINT iNo = 0,iMask1 = 0x00000004,iMask2 = 0x00000080,iMask = 0,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iMask = iMask1 | iMask2;
    
    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}