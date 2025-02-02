#include <iostream>

using namespace std;

int main() {
    int noOfCups;
    double priceOfaCup, totalPrice;
    const double taxRate = 10.0;  

    cout << "How many cups do you want? ";
    cin >> noOfCups;

    cout << "Price of one cup: ";
    cin >> priceOfaCup;

    double basePrice = noOfCups * priceOfaCup;
    double taxAmount = basePrice * (taxRate / 100);
    totalPrice = basePrice + taxAmount;

    cout << "Total Cost: $" << basePrice << " + " << taxRate << "% Tax ($" << taxAmount << ")" << endl;
    cout << "Total Bill: $" << totalPrice << endl;

    return 0;
}
