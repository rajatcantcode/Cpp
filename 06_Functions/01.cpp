#include <iostream>

using namespace std;

// 1. Function Declaration (Prototype)
void greet();                 
void addNumbers(int a, int b); 
int multiply(int x, int y);    
double divide(double num1, double num2); 
void displayMessage(string message = "Default Message"); // Default Parameter
int power(int base, int exp); // Recursion Example
inline void showInline(); // Inline Function
void swapValues(int &a, int &b); // Pass by Reference

// Function Overloading
void print(int num); 
void print(double num); 
void print(string text); 

int main() {
    // 2. Function Call
    greet();  

    addNumbers(10, 5); 

    int product = multiply(4, 6);
    cout << "Multiplication Result: " << product << endl;

    double result = divide(10, 2);
    cout << "Division Result: " << result << endl;

    // Actual Parameters (Passing Arguments)
    int a = 3, b = 7;
    swapValues(a, b); 
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Default Parameter Example
    displayMessage();
    displayMessage("Custom Message");

    // Function Overloading Examples
    print(100);
    print(25.5);
    print("Hello, C++");

    // Recursion Example
    cout << "Power(2, 3) = " << power(2, 3) << endl;

    // Inline Function
    showInline();

    return 0;
}

// 3. Function Definitions

// Function without parameters and return value
void greet() {
    cout << "Hello! Welcome to C++ Functions.\n";
}

// Function with parameters but no return value
void addNumbers(int a, int b) {
    cout << "Sum: " << (a + b) << endl;
}

// Function with parameters and return value
int multiply(int x, int y) {
    return x * y;
}

// Function with different data types
double divide(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero.\n";
        return 0;
    }
    return num1 / num2;
}

// Function with default parameters
void displayMessage(string message = "Rajat") {
    cout << "Message: " << message << endl;
}

// Function Overloading (Same function name, different parameters)
void print(int num) {
    cout << "Integer: " << num << endl;
}

void print(double num) {
    cout << "Double: " << num << endl;
}

void print(string text) {
    cout << "String: " << text << endl;
}

// Recursive Function (Calculates base^exp)
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

