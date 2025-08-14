#include <iostream>
using namespace std;

class love{
    private:
    int a;
    public:
    love(){
        a=25;
    }

    friend void display(love b );
};

void display( love b){
    cout<<b.a;
}