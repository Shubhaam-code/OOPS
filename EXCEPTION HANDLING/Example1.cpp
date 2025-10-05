#include <iostream>
using namespace std;

class customer
{
   
    string name;
    int balance;
    int account_no;

    public:
    customer(string name,int balance,int account_no)
    {
        this->balance=balance;
        this->name=name;
        this->account_no=account_no;
    }

    // DEPOSITE

    void deposite(int amount)
    {
        if(amount<=0)
        {
            throw "AMOUNT IS NOT SUFFIENT";
        }
        balance+=amount;
        cout<<amount<<" IS SUCESSFULLY UPDATED.\n";    
    }

    // WITHDRAW
    
    void withdraw(int amount)
    {
        if(amount<=0 || amount>=balance)
        {
            throw "AMOUNT IS NOT SUFFICENT";
        }
        balance-=amount;
        cout<<amount<<" IS WITHDRAW SUCESSFULLY. \n ";
    }
};

int main()
{
    customer aa("SHUBHAM",5000,12);
    try{
    aa.deposite(1000);
    aa.withdraw(7000);
    }
    catch(const char *e)
    {
        cout<<"EXCEPTION "<<e;
    }
    
}
