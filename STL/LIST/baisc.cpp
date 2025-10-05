#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers; // Empty list of integers
    list<string> names; // Empty list of strings
    list<int> marks(5, 100); // List with 5 elements, all initialized to 100

    // Adding Elements:

    numbers.push_back(10); // Adds 10 to the end
    numbers.push_front(5); // Adds 5 to the start
    numbers.insert(numbers.begin(), 3); // Adds 3 at the beginning
    // List now: [3, 5, 10]

    cout << numbers.front()<<" "; // Prints 3 (first element)
    cout << numbers.back()<<" "; // Prints 10 (last element)

    // Lists don’t support direct index access (like numbers[0]). You must use iterators or functions like front() and back().
    
    // Removing Elements:
    numbers.pop_back(); // Removes 10
    numbers.pop_front(); // Removes 3
    numbers.remove(5); // Removes all 5s


    cout << numbers.size(); // Prints number of elements
    cout << numbers.empty(); // Prints 1 if empty, 0 if not

    // If : list[20,10,30]
    numbers.sort(); // List becomes [10, 20, 30]
    numbers.reverse(); // List becomes [30, 20, 10]

    // unique
    numbers = {1, 1, 2, 2, 3};
    numbers.unique(); // List becomes [1, 2, 3] 


    // merge
    list<int> list1 = {1, 3, 5};
    list<int> list2 = {2, 4, 6};
    list1.merge(list2); // list1 becomes [1, 2, 3, 4, 5, 6], list2 becomes empty
}