#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);  

    printf("Entered string is : %s\n",Arr);
    
    return 0;
}