#include <iostream>
using namespace std;


class demo{
    int x;
    public:
    // default constructor
    demo(){
        x=10;
    }
    // copy constructor
    demo(demo &z){
        x=z.x;
    }

    void putdata(){
        cout<<"X EQUAL TO :"<<x;
    }
};

int main(){
    demo aa;
    demo bb(aa);
    bb.putdata();
}
