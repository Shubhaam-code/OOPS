#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream fout;
    //OPEN() 
    fout.open("hello.txt");

    string  st="I LOVE YOU SHUBHAM . I REALLY MISS YOU . ";
    fout<<st;
    
    fout.close();
    
}