#include <iostream>
using namespace std;

class customer{

    string name;
    int balance;
    int age;

    public:

    customer(string n, int b, int a){
        name = n;
        balance = b;
        age = a;
    }

    //  I DO NOT WANT TO PUBLIC THIS CODE FOR USER, HIDING THE MAIN INFORMATION ,ONLY SEE ESSENTIAL INFORMATION IS CALLED ABSTRACTION 
    void deposite(int amount){
        if(amount >0){

            balance+=amount;
           
        }

        else
        {
            cout<<"invaild amount";

        }
        
    }

    void dispaly()
    {
        cout<<balance;
    }

};


int main (){

    customer a1("shubham",1000,10);
    a1.deposite(1000);
    a1.dispaly();

}
