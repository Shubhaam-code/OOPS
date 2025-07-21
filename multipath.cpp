#include <iostream>
using namespace std;


class human{

    public:
    string name;
    void display()
    {
        cout<<"NAME :" <<name<<endl;
    }


};

class engineering :virtual public human
{   
    public:
    string specialization;

    void work (){
       cout<< "specialization:"<<specialization<<endl;
    }
};

class youtuber :virtual  public human
{
    public:
    int subscriber;

    

    void view(){
        cout<<"subcriber :"<<subscriber<<endl;
    }


};


class codeyoutuber: public engineering,public youtuber
{
    public :
    int salary;
    



    codeyoutuber(string  name, int subscriber, string specialization,int salary ){

        this->name = name;
        this->subscriber = subscriber;
        this->specialization= specialization;
        this->salary= salary;

    }

    void display1(){
        cout<<"NAME :"<< name<<endl;
        view();
        work();
        display();
    }

};


int main(){
    codeyoutuber c1("SHUBHAM",8500,"CSE CORE",25000);
    c1.display1();
   
    

}