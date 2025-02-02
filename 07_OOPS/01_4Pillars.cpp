/*
    ================================
    Object-Oriented Programming (OOP) Concepts in C++
    ================================

    OOP is a programming paradigm based on objects that contain data (attributes) and functions (methods). 
    It promotes code reusability, scalability, and modularity.

    The four main principles of OOP:
    ---------------------------------
    1. Encapsulation
    2. Abstraction
    3. Inheritance
    4. Polymorphism
*/

#include <iostream>
using namespace std;

/* 
    1. ENCAPSULATION
    ------------------
    - Encapsulation is the concept of binding data and methods together in a single unit (class).
    - It restricts direct access to certain details of an object and only allows modification through public methods.
*/
class EncapsulationExample {
private:
    int data; // Private variable (not accessible directly)

public:
    void setData(int value) { data = value; } // Setter method
    int getData() { return data; }            // Getter method
};

/* 
    2. ABSTRACTION
    ------------------
    - Abstraction hides complex implementation details and only shows relevant information to the user.
    - Achieved using abstract classes (with at least one pure virtual function) or interfaces.
*/
class AbstractExample {
public:
    virtual void display() = 0; // Pure virtual function (makes this an abstract class)
};

class ConcreteExample : public AbstractExample {
public:
    void display() override { cout << "Concrete implementation of display()" << endl; }
};

/* 
    3. INHERITANCE
    ------------------
    - Inheritance allows a class to inherit attributes and methods from another class.
    - Reduces redundancy by enabling code reusability.
    - Types: 
      1. Single Inheritance
      2. Multiple Inheritance
      3. Multilevel Inheritance
      4. Hierarchical Inheritance
      5. Hybrid Inheritance
*/

// Base class
class Parent {
public:
    void show() { cout << "This is a Parent class method" << endl; }
};

// Derived class (Single Inheritance)
class Child : public Parent {
public:
    void display() { cout << "This is a Child class method" << endl; }
};

/* 
    4. POLYMORPHISM
    ------------------
    - Polymorphism allows a function or method to have different behaviors.
    - Types:
      1. Compile-time Polymorphism (Function Overloading & Operator Overloading)
      2. Runtime Polymorphism (Method Overriding using Virtual Functions)
*/

// Compile-time Polymorphism (Function Overloading)
class FunctionOverloadingExample {
public:
    void show() { cout << "No arguments" << endl; }
    void show(int x) { cout << "Integer argument: " << x << endl; }
};

// Runtime Polymorphism (Method Overriding)
class Base {
public:
    virtual void display() { cout << "Base class display()" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived class display()" << endl; }
};

int main() {
    // Encapsulation Example
    EncapsulationExample obj;
    obj.setData(10);
    cout << "Encapsulated Data: " << obj.getData() << endl;

    // Abstraction Example
    ConcreteExample concrete;
    concrete.display();

    // Inheritance Example
    Child childObj;
    childObj.show();   // Parent class method
    childObj.display(); // Child class method

    // Polymorphism - Function Overloading
    FunctionOverloadingExample fObj;
    fObj.show();
    fObj.show(5);

    // Polymorphism - Method Overriding
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); // Calls Derived class display()

    return 0;
}
