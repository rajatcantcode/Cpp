#include <iostream>
using namespace std;

// 1. Accessing Member Variables
class Example {
private:
    int raj;
public:
    Example(int x) {
        this->raj = x; // Resolving name conflict
    }

    void display() {
        cout << "Value: " << this->raj << endl;
    }
};

// 2. Returning the Current Object (*this)
class ExampleChaining {
private:
    int x;
public:
    ExampleChaining(int x) { this->x = x; }

    ExampleChaining& setValue(int x) {
        this->x = x;
        return *this;  // Returning current object
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

// 3. Comparing Objects Using `this`
class ExampleComparison {
public:
    bool isSameInstance(ExampleComparison& other) {
        return this == &other; // Comparing memory addresses
    }
};

// 4. Avoiding Shadowing Using `this`
class ExampleShadow {
private:
    int x;
public:
    void setX(int x) {
        (*this).x = x;  // Equivalent to this->x = x;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    // Test: Accessing Member Variables
    Example obj(10);
    obj.display();

    // Test: Returning the Current Object (*this)
    ExampleChaining objChain(5);
    objChain.setValue(10).display(); // Chained function calls

    // Test: Comparing Objects Using `this`
    ExampleComparison obj1, obj2;
    cout << "obj1 and obj2 are same instance: " << obj1.isSameInstance(obj2) << endl;
    cout << "obj1 and obj1 are same instance: " << obj1.isSameInstance(obj1) << endl;

    // Test: Avoiding Shadowing Using `this`
    ExampleShadow objShadow;
    objShadow.setX(20);
    objShadow.display();

    return 0;
}
