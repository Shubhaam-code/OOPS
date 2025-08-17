#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void getdata(){
        cout<<"ENTER THE NO ";
        cin>>x;
    }
    friend void check(A,B);
};
class B{
    int y;
    public:
    void input(){
        cout<<"ENTER THE NO ";
        cin>>y;
    }
    friend void check(A,B);
};

void check(A aa,B bb){
    if(aa.x>bb.y){
        cout<<"X IS GREATER THAN Y";
    }
    else{
        cout<<"Y IS GREATER THAN X";
    }

}
int main(){
    A aa;
    aa.getdata();
    B bb;
    bb.input();
    check(aa,bb);
}