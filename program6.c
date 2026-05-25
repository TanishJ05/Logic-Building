#include<stdio.h>

int main()
{
    // variable creation with default
    float i = 0.0f,j = 0.0f,k = 0.0f;
    printf("enter first number: \n");
    scanf("%f",&i);

    printf("enter second number: \n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is : %f\n",k);

    return 0;
}
