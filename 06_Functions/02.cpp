#include <iostream>  

using namespace std; 

/* Function Prototypes (Declare functions before main) or will face error */
void ex1(int x);  /* Pass by Value */
void ex2(int &x); /* Pass by Reference */
inline void showInline(); /* Inline Function */

#define SQUARE(x) x * x

int main(){  
    int x = 2; 

    ex1(x);  
    cout << "After ex1, x = " << x << endl;  /* Prints x (unchanged) */

    ex2(x);  
    cout << "After ex2, Final value of x = " << x << endl;  /* Prints x (changed) */

    // Macros vs Inline function

    int p = 3;
    cout << SQUARE(p + 1) << endl;  // Incorrect output: 7 

    return 0;  
}

/* 
   Pass by Value 
   - The function gets a copy of 'x'
   - Any changes inside the function do NOT affect the original variable
*/
void ex1(int x){  
    x = x + 5;  /* Modify x inside the function */
    cout << "Inside ex1, x = " << x << endl;  /* Prints modified x (only inside this function) */
}

/* 
   Pass by Reference 
   - Uses '&' to refer to the original variable
   - Changes inside the function affect the original 'x' in main()
*/
void ex2(int &x){  
    x = x + 5;  /* Modify x (this change affects 'x' in main) */
    cout << "Inside ex2, x = " << x << endl;  /* Prints modified x */
}






