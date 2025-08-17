#include <iostream>
using namespace std;

class demo{
    int x;
    public:
    void getdata(){
        cout<<"ENTER THE VALUE OF X :";
        cin>>x;
    }
    void putdata(){
        cout<<"X :"<<x<<endl;
    }
    void operator=(demo bb){
        x=bb.x;
    }
};
int main(){
    demo aa,bb;
    bb.getdata();
    bb.putdata();
    aa=bb;
    aa.putdata();
    
}