#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter number";
    cin>>a>>b;
    if(a>b)
    {
        cout<<a;
    }
    else if(a == b)
    {
        cout<<"equal number";
    }
    else
    {
        cout<<b;
    }
}