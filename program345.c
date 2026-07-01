#include<stdio.h>

typedef unsigned int UINT;
// position is 12 and 23
int main()
{
    UINT iNo = 0,iMask = 0x400800,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}