#include<stdio.h>

typedef unsigned int UINT;
// position is 21 and 27
int main()
{
    UINT iNo = 0,iMask = 0x4100000,iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is : %d\n",iResult);

    return 0;
}