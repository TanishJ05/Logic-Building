/*
input = 4
output = 4*3*2*1=10
*/

#include <stdio.h>


void Display(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }

}

int main()
{
    int iValue = 0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}