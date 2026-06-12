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

    }
};
int main()
{
    ArrayX aobj;    //error

    cout<<sizeof(aobj)<<"\n";   

    return 0;
}