#include <iostream>
using namespace std;


class human{

    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun (){
        a = 10;
        b = 20;
        c = 30;
    }

};

int main (){
    human a1;
    a1.b = 10;  // not acess because of protected
    a1.c = 10; // acess because of public


}