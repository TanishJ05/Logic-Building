#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int X)   
    {
        iSize = X;                  //Characteristics Initialization
        Arr = new int[iSize];       //Resource allocation
        cout<<"Inside parameterized constructor\n";
    }

    ~ArrayX()                       // Destructor
    {
        cout<<"Inside destructor\n";
        delete []Arr;              //Resource deallocation
    }
};
int main()
{
    // Static memory allocation for object
    //ArrayX aobj1(5);        

    ArrayX *aobj1 = new ArrayX(5);   // Dynamic memory allocation for object
    
    delete aobj1;

    cout<<"End of main\n";

    return 0;
}