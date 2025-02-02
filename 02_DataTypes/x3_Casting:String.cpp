#include <iostream>
#include <string>

using namespace std;

int main(){

    // ---------Type Casting-----------
    float teaPrice = 49.99;
    int roundedTeaPrice = teaPrice; // implicitally
    // int roundedTeaPrice = (int) teaPrice ; // explicitally
    cout << roundedTeaPrice << endl;


    // ---------String - make sure to include String----------
    // The backslash '\' is used as an escape character.
    // Reference : https://learn.microsoft.com/en-us/cpp/c-language/escape-sequences?view=msvc-170
    // It allows us to include special characters like double quotes inside a string.  
    // This tells the compiler to treat them as part of the string rather than as syntax.  

    string favoriteTea = "Lemon Tea \t";  // '\t' adds a tab space.  
    string description = "- Known as \"best\" tea";  // '\"' allows double quotes inside the string.  
    

    cout << favoriteTea << description << endl;

    return 0;
}