#include<stdio.h>

typedef unsigned int UINT;

// position is 4
UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iResult = 0,iMask = 0xfffffff7;

    if(iPos < 1 || iPos > 32)
    {
        printf("invalid bit position\n");
        return iNo;
    }

    iResult = iNo & iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0,iLocation = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    printf("Enter the bit position\n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("updated number : %d\n",iRet);

    return 0;
}