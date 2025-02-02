#include <iostream>

using namespace std;

int main() {
    bool membershipForMoreThanAYear;
    int noOfCups;
    double totalBill;  // Use double to avoid rounding issues
    const int priceOfACup = 100;
    const double discountRate = 10.0;

    cout << "Do you have a membership for more than a year? (1 for Yes, 0 for No): ";
    cin >> membershipForMoreThanAYear;

    cout << "How many cups do you want? ";
    cin >> noOfCups;

    totalBill = noOfCups * priceOfACup;

    if (membershipForMoreThanAYear || noOfCups >= 12) {
        cout << "Congratulations! You are eligible for a " << discountRate << "% discount." << endl;
        totalBill -= totalBill * (discountRate / 100.0);
    } else {
        cout << "Sorry, you are not eligible for the discount!" << endl;
    }

    cout << "Here is your total bill: $" << totalBill << endl;

    return 0;
}
