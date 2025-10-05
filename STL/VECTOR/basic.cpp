#include <iostream>
#include <vector>
using namespace std;



int main(){

    vector<int> numbers; // Empty vector of integers
    vector<string> names; // Empty vector of strings
    vector<int> marks(5, 100); // Vector with 5 elements, all initialized to 100
    

    
    // push_back method 
    numbers.push_back(5);  // Adds an element to the end of the vector.
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);
    // pop method

    numbers.pop_back(); // remove last elment

    // Accessing Elements:

    // Using Index ([]): Access elements like an array using vector_name[index].
    // Using at(index): Similar to [], but safer (throws an error if the index is out of bounds).


    cout << numbers[0]<<endl; // Prints 10
    cout << numbers.at(1)<<endl; // Prints 20


    cout << numbers.size()<<endl; // Prints number of elements
    cout << numbers.empty()<<endl; // Prints 1 if empty, 0 if not

   

    // Other Useful Functions:

    // front(): Returns the first element.
    // back(): Returns the last element.
    // insert(position, value): Inserts an element at a specific position.

    cout << numbers.front()<<endl; // Prints first element
    numbers.insert(numbers.begin()+1, 50); // Inserts 50 at index 1

    cout<<numbers.at(1);
    numbers.clear();

    return 0;

}