#include <iostream>
using namespace std;

/*
    Friends in C++ are a way of breaking the encapsulation that classes provide. 
    To use a real-life analogy, friends are like trusted acquaintances who are given access to your private information unlike strangers.
*/

class MyClass {
private:
    int value;

public:
    // Constructor to initialize value
    MyClass(int value) : value(value) {}

    // Declare a friend function that has access to private members
    friend void displayValue(const MyClass& obj); 
};

// Friend function definition
void displayValue(const MyClass& obj) {
    cout << "The value is: " << obj.value << endl; // Accessing private member value
}

int main() {
    MyClass obj(42);  // Create an object of MyClass
    displayValue(obj);  // Calling the friend function that can access private members
    return 0;
}
