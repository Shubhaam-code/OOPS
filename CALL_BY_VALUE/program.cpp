#include <iostream>
using namespace std;

class addition{
    public:
    int sum(int x,int y){
        x+=10;
        cout<<"x ="<<x<<endl;
        cout<<"ADDITION "<<x+y<<endl;
    }
};
int main(){
    int a=5,b=10;
    addition aa;
     cout<<a;
    
    cout<<aa.sum(a,b);
    cout<<a;
    
}