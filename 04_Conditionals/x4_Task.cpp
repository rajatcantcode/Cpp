#include <iostream>

using namespace std;

int main() {
    int itemNumber;

    // Display the menu options
    cout << "Menu: \n1 - Green Tea \n2 - Black Tea \n3 - Soft Drink \n4 - Water\n";
    cout << "Enter the number of the item you want: ";
    cin >> itemNumber;

    // Switch-case to handle the selected item
    switch (itemNumber) {
        case 1:
            cout << "$5 - Green Tea" << endl;
            break;
        case 2:
            cout << "$3 - Black Tea" << endl;
            break;
        case 3:
            cout << "$1 - Soft Drink" << endl;
            break;
        case 4:
            cout << "$0.5 - Water" << endl;
            break;
        default:
            cout << "Please enter a valid item number (1-4)." << endl;
            break;
    }

    return 0;
}
