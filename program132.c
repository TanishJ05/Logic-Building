#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

// time complexity is O(N)
BOOL LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        } 
    }
    if(iCount == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)* iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    printf("Enter the element to search : \n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr,iLength,iValue);

    if(bRet == TRUE)
    {
        printf("Element is present \n");
    }
    else
    {
        printf("Element is not present \n");
    }
    
    free(Brr);

    return 0;
}