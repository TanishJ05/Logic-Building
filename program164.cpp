#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
    int *Arr;
    int iSize;

    public:
    ArrayX(int X)   
    {
        iSize = X;
        Arr = new int[iSize];       
        
    }

    ~ArrayX()                       
    {
        delete []Arr;              
    }
};
int main()
{
    ArrayX *aobj1 = new ArrayX(5);   

    //logic(Function call)
    cout<<aobj1->iSize<<"\n";  //error
    aobj1->Arr[0] = 0; //error
    aobj1->Arr = NULL;   //error
    
    delete aobj1;

    return 0;
}