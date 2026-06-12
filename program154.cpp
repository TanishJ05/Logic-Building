#include<iostream>
using namespace std;

#pragma pack(1) // 1 byte boundary
class ArrayX
{
    public:
    int *Arr;
    int iSize;
};
int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<"\n";   // 16

    return 0;
}