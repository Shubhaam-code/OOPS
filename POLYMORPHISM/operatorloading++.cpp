#include <iostream>
using namespace std;
class demo{
    public:
    int x;
    // input
    void getdata()
    {
        cout<<"ENTER THE VALUE OF X :";
        cin>>x;
    }
    // output
    void putdata()
    {
        cout<<x;
    }
    void operator ++()
    {
        cout<<"NEW VALUE :";
        x=x+1;
    }

};

int main(){
    demo aa;
    aa.getdata();
    cout<<"ORIGINAL VALUE :";
    aa.putdata();
    cout<<endl;
    ++aa;
    aa.putdata();


}




class demo{
    int x;
    public:
    void getdata(){
        cout<<"ENTER THE VALUE OF X :";
        cin>>x;
    }
    void putdata(){
        cout<<"X :"<<x<<endl;
    }
    void operator++(int){
        x=x+1;
    }
};
int main(){
    demo aa;
    aa.getdata();
    aa.putdata();
    aa++;
    aa.putdata();
    
    
}