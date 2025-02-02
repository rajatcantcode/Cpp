#include <iostream>

using namespace std;
// Note : Whenever using 'new' keyword , always use 'delete' keyword to get rid of memory leaks. :)
/*
    HEAP MEMORY & DYNAMIC MEMORY ALLOCATION
    ---------------------------------------
    - Heap memory is a region in RAM used for dynamic allocation.
    - Dynamic memory allocation means allocating memory at runtime instead of compile time.
    - In C++, we use `new` to allocate memory on the heap.
    - To free the allocated memory, we use `delete` to prevent memory leaks.

    // Compile Time vs Runtime:
    // Compile Time: The phase where source code is translated into machine code (executable). Errors like syntax and type errors occur here.
    // Run Time: The phase where the compiled program executes, handling tasks like user input and errors (e.g., divide by zero).
*/

// Function to demonstrate dynamic memory allocation
void dynamicMemoryExample();

// Function to allocate memory for chai orders
int* prepareChaiOrders(int cups);

int main() {
    // Call the function to see dynamic memory in action
    dynamicMemoryExample();

    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++) {
        cout << "Cup " << i + 1 << " has " << chaiOrder[i] << " ml\n";
    }

    // C++ automatically frees stack memory, but we must explicitly free dynamic memory.
    delete[] chaiOrder;  // Free allocated array memory
    chaiOrder = nullptr; // Avoid dangling pointer

    return 0;
}

// Function to allocate memory for chai orders
int* prepareChaiOrders(int cups) {
    int* orders = new int[cups];  // Dynamically allocate an array
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

// Function to demonstrate dynamic memory allocation
void dynamicMemoryExample() {
    // Allocating an integer dynamically on the heap
    int* dynVar = new int(25);

    // Printing the dynamically allocated value
    cout << "Memory address of allocated integer: " << dynVar << endl;
    cout << "Dynamically allocated value: " << *dynVar << endl;

    // Freeing the allocated memory
    delete dynVar;  
    dynVar = nullptr; // Prevents dangling pointer

    cout << "Memory freed! dynVar is now set to: " << dynVar << endl;
}
