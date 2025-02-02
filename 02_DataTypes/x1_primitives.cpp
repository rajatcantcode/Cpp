#include <iostream>

using namespace std;

int main(){
    int teaLeaves = 50;
    float waterTemperature = 85.588588;

    double priceOfTea = 299.99;
    double priceOfMe = 299.99999999;

    char teaGrade = 'A';
    char moreThanOneChar = 'ABC';

    bool isTeaReady = false;
    bool checkChar = 'a';
    //bool checkEmpty = ''; //Empty quotes are not allowed

    cout << waterTemperature << endl; //85.588588
    cout << isTeaReady << endl; // false is equivalent to 0 
    cout << checkChar << endl; // 1
    cout << moreThanOneChar << endl; // 2 warnings generated and value C is printed.
    cout << priceOfMe << endl; // 300 (Round off)
    return 0;
}