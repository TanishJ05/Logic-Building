#include<stdio.h>

void StrLenX(char *str)
{
    *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);  

    StrLenX(Arr);

    printf("string is : %s\n",Arr);

    return 0;
}