#include <iostream>
using namespace std;



class human{

    public:
    string name;
    int age;



    human(string name,int age){

        this->name = name;
        this->age = age;
    }

   

};

class student:public human
{
    int fee, roll_no;

    public:
    student(string name, int age, int fee, int roll_no) : human(name, age){
        this->fee = fee;
        this->roll_no = roll_no;
    }
    void display1(){

        cout<<" NAME :"<<name<<" AGE :"<<age<<" fee :"<<fee<<" roll_no :"<<roll_no<<endl;
    }


};

class teacher:public human{
    public:
    int salary;

    teacher(string name ,int age, int salary): human(name, age){
       
        this->salary = salary;

    }

    void display2(){
        cout<<" NAME :"<<name<<" AGE :"<<age<<" "<<"salary"<<" "<<salary<<endl;
    }
        
    
};

int main ()
{

    student s1("shubham",21,99,10894);

    s1.display1();
    teacher s2("SHUABHAM",21,25000);
    s2.display2();

}






