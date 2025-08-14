#include <iostream>
using namespace std;


class engineering
{   
    public:
    string specialization;

    engineering(){
        cout<<"1st engineering contructer call";
    }

    void work (){
       cout<< "specialization:"<<specialization<<endl;;
    }
};

class youtuber
{
    public:
    int subscriber;

    youtuber(){
        cout<<"HELLO YOUTUBER"<<endl;
    }

    void view(){
        cout<<"subcriber :"<<subscriber<<endl;;
    }


};


class codeyoutuber: public engineering,public youtuber
{
    public :
    string  name;
    codeyoutuber(){
        cout<<"HELLO CODEYOUTUBER"<<endl;

    }



    codeyoutuber(string  name, int subscriber, string specialization ){

        this->name = name;
        this->subscriber = subscriber;
        this->specialization= specialization;

    }

    void display(){
        cout<<"NAME :"<< name<<endl;
        view();
        work();
    }

};


int main(){
    codeyoutuber c1("SHUBHAM",8500,"CSE CORE");
    c1.display();
    // codeyoutuber c1  // use to check which constructer come 1st.  
    

}