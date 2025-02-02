#include <iostream>

using namespace std;

int main() {
    int noOfCups ;

    cout << "Enter the number of cups you want ? " << endl;
    cin >> noOfCups;

    // Loop to print brewing instructions for each cup
    for (int i = 0; i < noOfCups; i++) {
        cout << "Here are the steps to brew cup " << i + 1 << " of tea:" << endl;
        cout << "1. Boil water." << endl;
        cout << "2. Add tea leaves or tea bag." << endl;
        cout << "3. Let it steep for 3-5 minutes." << endl;
        cout << "4. Pour the tea into a cup." << endl;
        cout << "5. Enjoy your tea!" << endl;
        cout << endl; // Add a blank line for separation between cups
    }

    return 0;
}
