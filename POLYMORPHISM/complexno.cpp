#include<iostream>
using namespace std;

class complex{
    public:
    int a ,b;
    //input section
    void getdata()
    {
        cout<<"ENTER THE VALUE OF a :";
        cin>>a;
        cout<<"ENTER THE VALUE OF b :";
        cin>>b;
    }
    void putdata(){
        cout<<a <<"+i"<<b;
    }
    complex operator+(complex bb){
        complex cc;
        cc.a=a+bb.a;
        cc.b=b+bb.b;
        return cc;
    }
};

int main(){
    complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    cout<<endl;
    bb.putdata();
    cout<<endl;
    cc.putdata();
    cout<<endl;

   
    
}