#include <iostream>
using namespace std;
int main() {
    int row,col,space;
    
    for(row=1;row<=5;row++){
        for(space=1;space<=5-row;space++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    for(row=1;row<=5;row++){
        for(space=1;space<=row-1;space++){
            cout<<" ";
        }
        for(col=1;col<=6-row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}