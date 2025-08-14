#include <iostream>
using namespace std;

class human{
     
    protected:
    string  name;
    int age , weight;

};

class student:protected human{

    private:
    int roll_no;
    int fees;

    public:

    student(string name, int age , int weight){

        this->name =  name;
        this->age = age;
        this->weight = weight;

    }

    void dispaly()
    {

        cout<<"NAME "<<name<<" AGE "<<age<<" weight "<<weight;
    }


};


int main(){
    student s1("SHUBHAM",21,62);
    
   
    s1.dispaly();
    
}