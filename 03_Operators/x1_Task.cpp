#include <iostream>

using namespace std;

int main() {
    int totalCups;
    double priceOfCup, totalPrice;
    const double discountRate = 0.05;  // 5% discount
    const double discountThreshold = 1000;

    cout << "Amount of cups: ";
    cin >> totalCups;

    cout << "Enter the price per cup: ";
    cin >> priceOfCup;

    totalPrice = totalCups * priceOfCup;

    if (totalPrice > discountThreshold) {
        totalPrice -= totalPrice * discountRate; // Apply 5% discount
        cout << "Congrats! You have been rewarded a 5% discount! \nFinal Price: $" << totalPrice << endl;
    } else {
        cout << "Total Price: $" << totalPrice << endl;
    }

    return 0;
}
