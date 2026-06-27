#include<stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iNo = 0, iMask = 4, iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {    
    printf("Third bit is on\n");
    }
    else{
        printf("Third bit is off\n");
    }
    return 0;
}