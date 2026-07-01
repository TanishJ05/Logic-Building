#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0,iMask = 0xffffefff;        // position is 13

    printf("enter number : ");
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    
    printf("updated number : %d\n",iNo); 

    return 0;
}