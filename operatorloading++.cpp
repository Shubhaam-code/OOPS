#include <iostream>
using namespace std;
class demo{
    public:
    int x;
    void getdata()
    {
        cout<<"ENTER THE VALUE OF X :";
        cin>>x;
    }
    void putdata()
    {
        cout<<x;
    }
    void operator ++()
    {
        x=x+1;
    }

};

int main(){
    demo aa;
    aa.getdata();
    cout<<"ORIGINAL VALUE :";
    aa.putdata();
    cout<<endl;
    ++aa;
    aa.putdata();


}