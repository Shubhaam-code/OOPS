#include <iostream>
using namespace std;

class addition{
    public:
    int sum(int &x,int &y){
        x+=10;
        cout<<"x = "<<x<<endl;
        return (x+y);
    }
};
int main(){
    int a=5,b=10;
    addition *aa= new addition;
    cout<<aa->sum(a,b);
    
}