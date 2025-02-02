#include <iostream>

using namespace std;

int main() {
    int brewingNumber;

    // Display options to the user
    cout << "Enter the brewing number: \n1 - Boiling \n2 - Steeping \n3 - Iced Tea\n";
    cin >> brewingNumber;

    // Switch-case to handle the brewing method selection
    switch (brewingNumber) {
        case 1:
            cout << "Boiling: Heat water to 100°C and pour over tea leaves. Let it brew for 5 minutes." << endl;
            break;
        case 2:
            cout << "Steeping: Heat water to 80°C and steep the tea for 3-5 minutes." << endl;
            break;
        case 3:
            cout << "Iced Tea: Brew the tea as usual, let it cool, then add ice." << endl;
            break;
        default:
            cout << "Please enter a valid number between 1 and 3." << endl;
            break;
    }

    return 0;
}
