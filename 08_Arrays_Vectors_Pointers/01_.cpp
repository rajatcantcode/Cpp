/*
    ================================
    Essential C++ Concepts for Beginners
    ================================

    This program covers:
    1. Pointers
    2. Arrays
    3. Vectors (STL)
    4. References
    5. Dynamic Memory Allocation
    6. Function Pointers
*/

#include <iostream>
#include <vector>  
using namespace std;

/*
    1. POINTERS
    -----------
    - A pointer is a variable that is just used to store the address of another variable.
    - * is used to store the value of address.
*/
void pointerExample() {
    int a = 10;
    int* ptr = &a; // Pointer storing the address of a

    cout << "Pointer Example:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at ptr (dereferenced): " << *ptr << endl << endl;
}

/*
    2. ARRAYS
    ----------
    - Arrays store multiple values of the same data type in contiguous memory.
    - Arrays are closely related to pointers.
*/
void arrayExample() {
    int arr[5] = {1, 2, 3, 4, 5}; // Static array

    cout << "Array Example:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << "Array as Pointer: First element = " << *arr << endl;
    cout << "Second element using pointer notation = " << *(arr + 1) << endl << endl;
}

/*
    3. VECTORS (STL)
    -----------------
    - Vectors are dynamic arrays (part of the Standard Template Library - STL).
    - They automatically resize and provide useful functions.
*/
void vectorExample() {

    vector<int> vec;  // Declare vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // vector<int> vec = {10, 20, 30}; // Showing error

    cout << "Vector Example:" << endl;
    vec.push_back(40); // Adding element at the end

    for (int i = 0; i < vec.size(); i++) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }

    cout << "Vector size: " << vec.size() << endl;
    cout << "Vector front: " << vec.front() << endl;
    cout << "Vector back: " << vec.back() << endl << endl;
}



int main() {
    pointerExample();
    arrayExample();
    vectorExample();
    

    return 0;
}
