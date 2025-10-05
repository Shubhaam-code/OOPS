#include <iostream>
using namespace std;

class addition{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    int add(){
        return (a+b);
    }
};

int main(){
    addition *ptr;
    ptr=new addition();
    ptr->setdata(10,20);
    cout<<ptr->add();
    delete ptr;
}