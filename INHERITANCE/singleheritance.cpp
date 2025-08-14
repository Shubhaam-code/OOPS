#include <iostream>
using namespace std;

// single inheritance

class human{

    protected:
    string name;
    int age;

    public:

    human(string name,int age){

        this->name = name;
        this->age = age;
    }

   

};

class student:public human
{
    int fee, roll_no;

    public:
    student(string name, int age, int fee, int roll_no) : human(name, age) {
        this->fee = fee;
        this->roll_no = roll_no;
    }
    void display(){

        cout<<" NAME :"<<name<<" AGE :"<<age<<" fee :"<<fee<<" roll_no :"<<roll_no;
    }


};

int main(){

    student s1("shubham",21,99,10894);

    s1.display();

}






