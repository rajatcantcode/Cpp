#include <iostream>
using namespace std;

/*
    ================================
    Constructors, Destructors, and Copy Constructors in C++
    ================================

    This program covers:
    1. Constructors (Default, Parameterized)
    2. Destructor
    3. Copy Constructor

    Constructors initialize objects, while destructors clean up resources.
*/

/*
    1. CONSTRUCTOR
    ----------------
    - A constructor is a special member function that runs automatically when an object is created.
    - It initializes the object’s attributes.
    - The constructor has the same name as the class and **no return type**.
*/

// Example Class with Constructor
class ConstructorExample {
public:
    int value;

    // Same name as class
    // Default Constructor (No parameters)
    ConstructorExample() {
        value = 0;
        cout << "Default Constructor called! Value set to " << value << endl;
    }

    // Parameterized Constructor (With arguments)
    ConstructorExample(int val) {
        value = val;
        cout << "Parameterized Constructor called! Value set to " << value << endl;
    }
};

/*
    2. DESTRUCTOR
    ----------------
    - A destructor is a special function that runs automatically when an object goes out of scope.
    - It has the **same name as the class**, prefixed with `~`, and **no parameters or return type**.
    - Used for cleanup tasks like freeing memory.
*/

class DestructorExample {
public:
    DestructorExample() {
        cout << "Constructor: Object Created!" << endl;
    }

    // ~ - This sign is important - automatically destructor will be called :)
    ~DestructorExample() {
        cout << "Destructor: Object Destroyed!" << endl;
    }
};

/*
    3. COPY CONSTRUCTOR
    ---------------------
    - A copy constructor creates a new object **by copying another existing object**.
    - If not defined manually, C++ provides a **default copy constructor** (shallow copy).
    - Syntax: `ClassName(const ClassName& obj)`.
*/

class CopyConstructorExample {
public:
    int* data;

    // Constructor (Shallow Copy - just the memory address)
    CopyConstructorExample(int val) {
        data = new int(val); // Dynamic memory allocation
        cout << "Constructor called! Data = " << *data << endl;
    }

    // Copy Constructor (Deep Copy)
    // 'const' makes the parameter source read-only (cannot be modified inside the constructor).
    CopyConstructorExample(const CopyConstructorExample& source) {
        data = new int(*source.data); // Allocating new memory and copying the complete data of source
        cout << "Copy Constructor called! Copied Data = " << *data << endl;
    }

    // Destructor
    // ~ - This sign is important - automatically destructor will be called :)
    ~CopyConstructorExample() {
        delete data; // Free dynamically allocated memory
        cout << "Destructor called! Memory freed." << endl;
    }

};

int main() {

    /*
    cout << "\n--- Constructor Example ---\n";
    ConstructorExample obj1;    // Calls Default Constructor
    ConstructorExample obj2(10); // Calls Parameterized Constructor
    */

    /*
    cout << "\n--- Destructor Example ---\n";
    DestructorExample obj3; // Constructor and Destructor are automatically called
    */

    cout << "\n--- Copy Constructor Example ---\n";
    // Creating original object
    CopyConstructorExample original(42);      // Calls Constructor
    CopyConstructorExample copy = original;   // Calls Copy Constructor
   
    return 0;
}
