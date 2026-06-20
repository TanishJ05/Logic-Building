#include<stdio.h>

int StrLenX( char * const str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;  // str = str + 1
    }
    return iCount;

}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);  

    iRet = StrLenX(Arr);

    printf("length of string is : %d\n",iRet);

    return 0;
}