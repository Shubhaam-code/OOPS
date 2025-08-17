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
    bptr=&aa;
    bptr->show();

    
    B bb;  // here object is derived class
    bptr=&bb;
    bptr->show(); // but print base class show function

    // NOW TO OVERCIME THIS PROBELM
    // VIRTUAL FUNCTION IS COME

    C cc;
    bptr=&cc;
    bptr->show();

}




