#include <iostream>
using namespace std;

template <typename T>
class Box {
public:
    T value;
    Box(T v){
        value=v;
    }
    void print() {
        cout << "Value: " << value << endl;
    }
    
};

int main() {
    // Create objects with different types
    Box<int> intBox(10);
    Box<double> doubleBox(5.5);
    Box<string> stringBox("Hello");

    // Print values
    intBox.print(); // Prints Value: 10
    doubleBox.print(); // Prints Value: 5.5
    stringBox.print(); // Prints Value: Hello

    
    return 0;
}