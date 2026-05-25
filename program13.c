#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
    iRemainder = iNo % 2;

    return iRemainder;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("number is even\n");

    }
    else
    {
        printf("number is odd\n");
    }

    return 0;
}