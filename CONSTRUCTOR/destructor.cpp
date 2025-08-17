#include <iostream>
using namespace std;

int count=0;
class demo{
    public:
    
    demo(){
        count++;
        cout<<"NO OF OBJECT IS CREATED "<<count<<endl;
    }
    ~demo(){
        count--;
        cout<<"NO OF OBJECT IS DESTROYED "<<count<<endl;
    }
};

int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
}