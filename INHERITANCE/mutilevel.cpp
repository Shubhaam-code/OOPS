#include <iostream>
using namespace std;

class person
{
    protected:
    string name;

    public:
    person(string name){
        this->name = name;

    }


};


class employee:public person
{
   protected:
    int salary;
    public:
    employee(string name, int salary):person(name){

        this-> salary = salary;
    }


};


class manger:public employee
{
    protected:
    string department;
    int no_of_employee;

    public:

    manger(string name, int salary,string department,
        int no_of_employee):employee(name,salary){

            this-> department = department;
            this-> no_of_employee = no_of_employee;
        }


        void display(){

            cout<< "Name: " << name << "\n"
            << "Salary: " << salary << "\n"
            << "Department: " << department << "\n"
            << "No. of Employees: " << no_of_employee << endl;
        }




};


int main(){
    
    manger m1("SHUBHAM",250000,"CEO",25);
    m1.display();
}

