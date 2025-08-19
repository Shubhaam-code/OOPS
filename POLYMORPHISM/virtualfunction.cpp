#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"BASE CLASS....."<<endl;
    }

};
class B:public A{
    public:
    void show(){
        cout<<"DERIVED CLASS....."<<endl;
    }

}; 
class C:public A{
    public:
    void show(){
        cout<<"DERIVED CLASS....."<<endl;
    }

};
int main(){
    // method overridding

    
    // THIS IS EARLY BINDING
    // B aa; 
    // aa.show();
    // aa.A::show();

    

    // late binding
    A *bptr;
    A aa; // here object is base class
    bptr=&aa; // adress of A object store
    bptr->show(); // ye A* pointer bss wahi function ko call karega jo base class me ha 

    
    B bb;  // here object is derived class
    bptr=&bb;  // address of B object store
    bptr->show(); // but print base class show function

    // NOW TO OVERCIME THIS PROBELM
    // VIRTUAL FUNCTION IS COME

    C cc;
    bptr=&cc;
    bptr->show();

}




