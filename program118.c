#include<stdio.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
    
}

int main()
{
    int iLength = 4;
    int Brr[iLength] ;   
    int iArr = 0;
    Brr[0] = 10;
    int iRet = 0;
    
    printf("Enter the elements : \n");

    for(iArr = 0; iArr < iLength; iArr++)
    {
        scanf("%d",&Brr[iArr]);
    }
    
    iRet = Summation(Brr,iLength);
    printf("Summation is : %d\n ",iRet);
    return 0;
}