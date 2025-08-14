#include <iostream>
using namespace std;

class demo{
    private :
    int a;
    public:
    demo(){
        a=10;
    }
    demo(demo &b){
        a=b.a;
    }
    void display(){
        cout<<"A :"<<a;
    }
};

int main(){
    demo aa;
    demo bb(aa);
    bb.display();
}