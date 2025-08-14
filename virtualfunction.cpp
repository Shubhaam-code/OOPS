#include <iostream>
using namespace std;
class A{
    public:

    virtual void show(){
        cout<<"BASE CLASS ";
    }
};
class B:public A{
    public:

    void show(){
        cout<<"DERIVED CLASS ";
    }
};
int main(){
   A *bptr ;
   B aa;
   bptr=&aa;

   bptr->show();
}