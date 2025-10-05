#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b) {
    return (a + b);
}

int main() {
    // Using function template with different types
    cout << "Add of 5 and 3: " << Add(5, 3) << endl; // T is int, prints 5
    cout << "Add of 5.5 and 3.2: " << Add(5.5, 3.2) << endl; // T is double, prints 5.5
    

    // Explicit type specification
    cout << "Max of 10 and 20 (explicit int): " << Add<int>(10, 20) << endl; // Prints 20

    return 0;
}