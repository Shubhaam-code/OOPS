#include <iostream>
using namespace std;
// abstract class
class A{
    public:
    virtual void show()=0;
};

class B:public A{
    public:
    void show(){
        cout<<"BASE CLASS....."<<endl;
    }
    void display(){
        cout<<"DERIVED CLASS....."<<endl;
    }

};
int main(){
    A *ptr;
    B aa;
    ptr=&aa;
    ptr->show();
    aa.display();

}