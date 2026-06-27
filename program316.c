#include<stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iNo = 0, iMask = 0x40, iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {    
    printf("Seventh bit is on\n");
    }
    else{
        printf("Seventh bit is off\n");
    }
    return 0;
}