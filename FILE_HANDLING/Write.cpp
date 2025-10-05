#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    //OPENING FILE USING CONSTRUCTOR AND WRITE
    string st="HELLO , HOW ARE YOU SHUBHAM ...";
    ofstream fout("hello.txt");
    fout<<st;
}

