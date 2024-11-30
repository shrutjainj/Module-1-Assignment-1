#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>b;
    a = 3.14 * b*b;
    c = 2 * 3.14 * b;
    if(a < c)
    {
        cout<<"Circumference greater";
    }
    else
    {
        cout<<"Area larg";
    }
}