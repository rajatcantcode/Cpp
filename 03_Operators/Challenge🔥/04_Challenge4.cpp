#include <iostream>

using namespace std;

int main() {
    // Note : 1 - 1 ; 10 - 2 ; 100 - 4
    int stock = 5;  // Binary: 101 (Green & Oolong are in stock, Black is not)
    int userChoice;

    cout << "Tea Type Availability Check:" << endl;
    cout << "1 - Green Tea" << endl;
    cout << "2 - Black Tea" << endl;
    cout << "4 - Oolong Tea" << endl;
    cout << "Enter the number corresponding to the tea type you want to check: ";
    cin >> userChoice;

    if (userChoice == 1 || userChoice == 2 || userChoice == 4) {
        if (stock & userChoice) {
            cout << "The selected tea is in stock!" << endl;
        } else {
            cout << "Sorry, the selected tea is out of stock!" << endl;
        }
    } else {
        cout << "Invalid choice! Please enter 1, 2, or 4." << endl;
    }

    return 0;
}
