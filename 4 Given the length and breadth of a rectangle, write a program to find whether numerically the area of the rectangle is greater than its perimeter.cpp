#include<iostream>
using namespace std;
int main()
{
    int length, breadth, a, p;
    cout<<"Enter length and breadth ";
    cin>>length>>breadth;
    a = length * breadth;
    p = 2 * (length + breadth);
    if(a < p)
    {
        cout<<"area is more greater ";
    }
    else
    {
        cout<<"parameter is more greater";
    }
}