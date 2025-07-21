#include<iostream>
using namespace std;

class complex
{  public:
    int x;
    int k;
    void real(int i,int j)
    {
        x=i+j;
        cout<<x;
    }
    
    void imaginary(int i,int j)
    {
     k=i+j;
     cout<<"+";
     cout<<k;
     cout<<"i";
    }
};
int main()
{
    complex a;
    a.real(9,3);
    a.imaginary(9,4);
    return 0;
}