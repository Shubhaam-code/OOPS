#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string st;
    ifstream fin;
    fin.open("open.txt");

    while(fin.eof()==0)
    {
        getline(fin,st);
        cout<<st<<endl;
    }
}