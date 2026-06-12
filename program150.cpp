#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    cout<<"Enter number of elements : \n";
    cin>>iLength;

    // C :  Brr = (int*)malloc(iLength * sizeof(int));
    // Java : Brr = new int[iLength];
    Brr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }
    iRet = Summation(Brr, iLength);
    cout<<"Summation of elements is : "<<iRet<<endl;

    delete []Brr; // free(Brr);

    return 0;
}