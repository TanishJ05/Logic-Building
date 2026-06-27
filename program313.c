#include<stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iNo = 0, iMask = 0x00010000, iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {    
    printf("17th bit is on\n");
    }
    else{
        printf("17th bit is off\n");
    }
    return 0;
}