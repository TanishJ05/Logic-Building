// input : 5
// output : 5 4 3 2 1

#include<stdio.h>

int main()
{
    int iValue = 0;
    iValue = 5;
    while( iValue >= 1 )
    {
        printf("%d ",iValue);
        iValue--;
    }
    printf("\n");
    
    return 0;
}