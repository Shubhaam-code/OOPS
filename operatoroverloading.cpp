#include <iostream>
using namespace std;

class demo{
    public:
    
    void getdata(int a){
        cout<<"ENTER THE VALUE OF A :";
        cin>>a;
    }

    void putdata(){
        cout<<"VALUE OF A :"<<a;
    }

    demo operator +(demo bb){
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }
};

int main(){
    demo aa,bb,cc;
    aa.getdata(5);
    bb.getdata(6);
    aa.putdata();
    cout<<endl;
    bb.putdata();
    cout<<endl;
    cc=aa+bb;
    cc.putdata();
}