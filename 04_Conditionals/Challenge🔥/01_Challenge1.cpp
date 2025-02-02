#include <iostream>
#include <string>

using namespace std;

int main(){
    string item;

    cout << "Enter a product name : ";
    cin >> item;

    transform(item.begin(), item.end(), item.begin(), ::tolower);
    
    if (item == "oolong"){
        cout << "You have an excellent taste";
    }
    else{
       cout <<  "Something is wrong with you :)";
    }


    return 0;
}