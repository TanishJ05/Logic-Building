// input : 5
// output : 1 2 3 4 5

#include<stdio.h>

int main()
{
    int iValue = 0;
    iValue = 1;
    while( iValue <= 5 )
    {
        printf("%d ",iValue);
        iValue++;
    }
    printf("\n");
    
    return 0;
}