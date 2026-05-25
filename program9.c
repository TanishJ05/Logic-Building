#include<stdio.h>

float AddTwoNumbers(
                        float fNO1,         // first input
                        float fNO2          // second input
                    )
{
    float fAns = 0.0f;                      // variable to store the result

    fAns = fNO1 + fNO2;                     // perform Addition

    return fAns;
}

int main()
{
   
    float fValue1  = 0.0f;                  // to store the first input 
    float fValue2 = 0.0f;                   // to store the second input
    float fResult = 0.0f;                   // to store the result

    printf("enter first number: \n");
    scanf("%f",&fValue1);

    printf("enter second number: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);      

    printf("Addition is : %f\n",fResult);

    return 0;
}
