#include <iostream>

using namespace std;

/*
    4. REFERENCES
    -------------
    - A reference is an alias (another name) for a variable.
    - Unlike pointers, references cannot be null and must be initialized.
*/
void referenceExample() {
    int x = 50;
    int& ref = x; // Reference to x

    cout << "Reference Example:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 100; // Changing reference modifies x
    cout << "After modifying ref, x = " << x << endl << endl;
}

/*
    5. DYNAMIC MEMORY ALLOCATION
    -----------------------------
    - Memory can be allocated dynamically using `new` and `delete`.
    - Use `new` for heap memory allocation and `delete` to free memory.
*/
void dynamicMemoryExample() {
    int* dynVar = new int(25); // Dynamically allocate an integer

    cout << "Dynamic Memory Example:" << endl;
    cout << "Dynamically allocated value: " << *dynVar << endl;

    delete dynVar; // Free the allocated memory
    cout << "Memory freed!" << endl << endl;
}

/*
    6. FUNCTION POINTERS
    ----------------------
    - Function pointers store addresses of functions.
    - They can be used to call functions dynamically.
*/
void sampleFunction() {
    cout << "Function Pointer Example: Hello from sampleFunction!" << endl << endl;
}

void functionPointerExample() {
    void (*funcPtr)() = &sampleFunction; // Pointer to function
    funcPtr(); // Calling function via pointer
}

int main(){
    referenceExample();
    dynamicMemoryExample();
    functionPointerExample();
}