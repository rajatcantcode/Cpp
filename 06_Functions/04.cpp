#include <iostream>  

using namespace std; 

/* 
   In C/C++ programming, macros are text replacements made before the program is compiled. They are defined with #define.
   Macros do not follow operator rules (e.g., order of operations), which can lead to errors.
*/
#define SQUARE(x) x * x

/*
   Inline Function:
   - Inline functions are regular functions where the compiler attempts to insert the function code directly in place of the function call.
   - They can make the program run faster (if used correctly).
   Advantages:
   - Inline functions avoid the overhead of function calls.
   - Unlike macros, inline functions respect operator rules and perform type checking.
*/
inline int SQUARE2(int x) { return x * x; }

int main() {  
    // Comparing Macros vs Inline Function

    int p = 3;

    // Macro Example
    cout << "Macro SQUARE(p + 1): " << SQUARE(p + 1) << endl;  
    // Incorrect output: 7 
    // Problem: After preprocessing, it becomes 3 + 1 * 3 + 1, which is evaluated as 3 + 3 + 1, resulting in 7.

    // Inline Function Example
    cout << "Inline SQUARE2(p + 1): " << SQUARE2(p + 1) << endl;  
    // Correct output: 16 
    // The expression is evaluated properly as (3 + 1) * (3 + 1) = 16.

    return 0;  
}
