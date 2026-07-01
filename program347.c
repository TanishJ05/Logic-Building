#include<stdio.h>

typedef unsigned int UINT;
// position is 3 and 8
int main()
{
    UINT iNo = 0,iMask = 0x84,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}