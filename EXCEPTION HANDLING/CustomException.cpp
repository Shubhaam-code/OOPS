#include <iostream>
#include <exception>
using namespace std;

class AgeVaildation : public exception
{
    public:
    const char* what() const throw(){
        return "AGE IS NOT VAILD";
    }
};

int main(){
    int age;
    cout<<"ENTER THE AGE";
    cin>>age;

    try{
        if(age<0)
        {
            throw AgeVaildation();
        }
        else
        {
            cout<<"VAILD AGE";
        }
    }
    catch (AgeVaildation &e)
    {
        cout<<e.what();
    }
}