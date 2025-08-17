#include <iostream>
using namespace std;

class X{
    int x;
    public:
    X(int a){
        x=a;
    }
    friend class Y;
};
class Y{
    public:
    void show(X obj){
        cout<<obj.x;
    }
};

int main(){
    X obj(5);
    Y aa;
    aa.show(obj);
}  
