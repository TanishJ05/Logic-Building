#include<stdio.h>

typedef unsigned int UINT;
// position is 9 and 17
int main()
{
    UINT iNo = 0,iMask = 0x10100,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}