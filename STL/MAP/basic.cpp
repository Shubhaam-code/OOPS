#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> scores; // Empty map: string keys, int values
    map<int, string> students; // Empty map: int keys, string values

    // Adding Elements

    scores["Alice"] = 90; // Adds or updates: key="Alice", value=90
    scores.insert({"Bob", 85}); // Adds: key="Bob", value=85
    scores.emplace("Charlie", 95); // Adds: key="Charlie", value=95


    // Accesing

    cout << scores["Alice"] << endl; // Prints 90
    cout << scores.at("Bob") << endl; // Prints 85

    // Remove
    scores.erase("Alice"); // Removes Alice’s entry
    scores.clear(); // Empties the map

    // size and empty
    cout << scores.size() << endl; // Prints number of pairs
    cout << scores.empty() << endl; // Prints 1 if empty, 0 if not

    // for checking
    if(scores.count("Alice")) {
        cout << "Alice exists!" << endl;
    }
}