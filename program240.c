#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String : \n");
    scanf("%s",Arr);  // issue

    printf("Entered string is : %s\n",Arr);
    
    return 0;
}