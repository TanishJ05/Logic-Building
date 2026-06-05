#include<stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;
    int Brr[iLength] ;   // error solved
    int iArr = 0;
    Brr[0] = 10;
    
    printf("Enter the elememt : \n");

    for(iArr = 0; iArr < 4; iArr++)
    {
        scanf("%d",&Brr[iArr]);
    }
    
    Display(Brr,iLength);
    
    return 0;
}