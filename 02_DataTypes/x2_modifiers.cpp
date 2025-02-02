/*
    Reference: https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170
*/

#include <iostream>

using namespace std;

int main() {
    int rajat = -100; 
    unsigned smallTeaPack = 1200; 

    // `int` can hold both positive and negative values. However, `unsigned` types can only store positive values.
    // The memory size of `int` depends on the compiler and system architecture and we can customize like this.
    // __int8 x = 150; // Currently my compiler is not supporting it.

    __int8_t hello = 100; // `__int8_t` is a signed 8-bit integer (equivalent to `int8_t` in <cstdint>)

    // We have different integer data types like `long` and `long long`.
    // Both can be `unsigned`, meaning they only store non-negative values.

    long largeTeaStorage = 100000000; // A `long` integer, typically 4 or 8 bytes depending on the system.
    long long largeStorage = 100000000; // A `long long` integer, usually at least 8 bytes.

    short teaSample = 25; // `short` is a smaller integer type, typically 2 bytes.

    cout << rajat << endl;  // Prints -100 (negative values are allowed in `int`)
    cout << smallTeaPack << endl;  // Prints 1200 (unsigned values can't be negative)
    cout << hello << endl; 
    // Question: Why is it printing `d` instead of 100?
    // Answer: If `cout` interprets `__int8_t` as a `char`, it prints the ASCII character of 100, which is 'd'.
    // To force integer output, cast it: `cout << static_cast<int>(hello) << endl;`

    cout << largeTeaStorage << endl; // Prints 100000000
    cout << largeStorage << endl; // Prints 100000000

    return 0;
}
