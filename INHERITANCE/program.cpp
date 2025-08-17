// marks of math and science
// marks of sport
// total marks

#include <iostream>
using namespace std;

class student{
    public:
    int math , science;

    void getdata(){
        cout<<"ENTER THE MATH MARKS :";
        cin>>math;
        cout<<"ENTER THE SCIENCE MARKS :";
        cin>>science;
    }

    void putdata(){
        cout<<"MATH MARKS :"<<math<<endl;
        cout<<"SCIENCE MARKS :"<<science<<endl;
    }
};
class sport{
    public:
     int sportmarks;

    void input(){

        cout<<"ENTER THE SPORT MARKS :";
        cin>>sportmarks;
    }

    void display(){
        cout<<"SPORT MARKS :"<<sportmarks<<endl;
        
    }

};

class total:public student , public sport{
    public:
    int total=0;
    void sum(){
        total=total+math+science+sportmarks;
        cout<<"TOTAL MARKS :"<<total;
    }
};

int main(){
    total *ptr=new total;
    ptr->getdata();
    ptr->putdata();
    ptr->input();
    ptr->display();
    ptr->sum();

}