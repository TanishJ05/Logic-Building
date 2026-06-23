#include<stdio.h>

// call by value
void Swap(int iNo1,int iNo2)
{
    int temp = 0;

    temp = iNo1;
     iNo1 = iNo2;
     iNo2 = temp;
}

int main()
{
    int i = 11,j = 21, temp = 0;
     
    Swap(i,j);
    printf("%d\n",i);
    printf("%d\n",j);


    return 0;
}