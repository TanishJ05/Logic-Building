/*
input = 4
output = 4*3*2*1=10
*/

#include <stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iMult = 1;
    
    if(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
        Factorial(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("enter the frequency : \n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);

    printf("Facorial is : %lu\n",iRet);
    
    return 0;
}