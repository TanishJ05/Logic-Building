#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iResult = 0,iMask = 0x1;

    if(iPos < 1 || iPos > 32)
    {
        printf("invalid bit position\n");
        return iNo;
    }
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0,iLocation = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    printf("Enter the bit position\n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("updated number : %d\n",iRet);

    return 0;
}