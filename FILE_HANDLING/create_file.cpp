#include <iostream>
#include <fstream>

using namespace std;

//CREATE FILE AND WRITE

int main()
{   //file open

    ofstream fout;
    fout.open("C:\\cpp\\output\\file.txt"); // if file is not exist then it has created 

    // write in file
    fout<<"HELLO SHUBHAM , HOW ARE YOU ";


    fout.close();

}

// READ 