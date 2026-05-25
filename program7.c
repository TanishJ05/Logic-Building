#include<stdio.h>

int main()
{
   
    float fValue1  = 0.0f;              // to store the first input 
    float fValue2 = 0.0f;               // to store the second input
    float fResult = 0.0f;               // to store the result

    printf("enter first number: \n");
    scanf("%f",&fValue1);

    printf("enter second number: \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;        // perform the addition

    printf("Addition is : %f\n",fResult);

    return 0;
}
