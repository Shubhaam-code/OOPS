#include <iostream>
using namespace std;

class animal{
    public:

    virtual void speak(){
        cout<<"huhu";
    }
};

class dog: public animal{

    public:

    void speak(){
        cout<<"Brak";
    }
};

int main(){

    animal *p;
    p= new dog;
    p->speak(); 
}