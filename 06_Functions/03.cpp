#include <iostream>

using namespace std;

int main(){
    // Lambda Function Syntax - [](){} 
    // The lambda function does not have a name and can be defined directly in the code.
    // '[]' is used to capture external variables (none in this case).
    // '()' defines the parameter list, and '{}' contains the function body.

    // Auto is used for lambda functions because we don't know the exact return type of the lambda at compile time.
    // The compiler automatically deduces the return type when we use 'auto'.
    auto preparedChai = [](int cups) {
        cout << "Preparing " << cups << " cups of tea" << endl;  
    };

    // Calling the lambda function with 4 cups of tea
    preparedChai(4);  // Output: "Preparing 4 cups of tea"
    
    return 0;
}
