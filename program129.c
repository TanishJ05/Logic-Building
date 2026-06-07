#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL LinearSearch(int Arr[],int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }   
    return bFlag;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)* iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    bRet = LinearSearch(Brr,iLength);

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