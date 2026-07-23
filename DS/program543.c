#include <stdio.h>

int Display(int Arr[],int iSize)
{
    static int i = 0;
    static int iSum = 0;
    while(i<iSize)
    {
        iSum = iSum + Arr[i];
        i++;
        Display(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int Brr[] = {10,20,30,40,50},iRet = 0;

    iRet = Display(Brr,5);

    printf("Summation is : %d\n",iRet);
    
    return 0;
}