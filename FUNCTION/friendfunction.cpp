#include <iostream>
using namespace std;


class demo{
    int a,b;
    public:
    void getdata(){
        cout<<"ENTER NO A:";
        cin>>a;
        cout<<"ENTER NO B:";
        cin>>b;
    }
    friend int sum(demo);
};

int sum(demo aa){
    return (aa.a+aa.b);
}
int main(){
    demo aa;
    aa.getdata();
    cout<<sum(aa);
}