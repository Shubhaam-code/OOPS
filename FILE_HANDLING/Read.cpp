#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    //OPENING FILE USING CONSTRUCTOR AND WRITE
    string st;
    // connecting our hello file with fin stream
    ifstream fin("hello.txt");
    // fin>>st; // fin Object igonre space and new line so we use getline function
    
    getline(fin,st);
    cout<<st;

    // Now connection is end here....
    fin.close();

    
}

