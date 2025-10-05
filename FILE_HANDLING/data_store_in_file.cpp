#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int>arr(5);
    cout<<"ENTER THE INPUT : ";
    for(int i=0;i<5;i++)
    {
        
        cin>>arr[i];
    }

    //file open

    ofstream fout;

    fout.open("open.txt");
    // write in file
    fout<<"ORIGINAL DATA ";
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }

    fout<<"\n SORTED DATA ";

   

    

    sort(arr.begin(),arr.end());


    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }

    fout.close();

    




}