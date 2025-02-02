#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "Enter you age:";
    cin >> age;

    if (age < 18){
        cout << "You are too young for tea";
    }else{
        cout << "Here is your tea";
    }
    
    return 0;
}