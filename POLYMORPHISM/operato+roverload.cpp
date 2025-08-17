#include <iostream>
using namespace std;

class demo{
    public:
    int a;
    //input
    void getdata(){
        cout<<"ENTER THE VALUE OF A :";
        cin>>a;
    }
    //output

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
    aa.getdata();
    bb.getdata();
    aa.putdata();
    cout<<endl;
    bb.putdata();
    cout<<endl;
    cc=aa+bb;
    cc.putdata();
}