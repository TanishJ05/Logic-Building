#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX()        // Default constructor
    {

    }
    ArrayX(int X)   // Parameterized constructor
    {

    }
};
int main()
{
    ArrayX aobj1;       //Default constructor
    ArrayX aobj2(5);    //Parameterized constructor

    cout<<sizeof(aobj1)<<"\n";   

    return 0;
}