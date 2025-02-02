#include <iostream>

using namespace std;

int main() {
    int noOfCups;
    double priceOfCup = 100;
    double totalPrice;
    double discountRate = 0; // Default to 0%

    cout << "Enter the number of cups you want: ";
    cin >> noOfCups;

    // Determine discount rate based on cup quantity
    if (noOfCups >= 20) {
        discountRate = 20;
    } else if (noOfCups >= 10) { 
        discountRate = 10;
    }
    else{
        discountRate = 0;
    }

    // Calculate total price before applying the discount
    totalPrice = noOfCups * priceOfCup;
    
    // Apply discount
    totalPrice -= totalPrice * (discountRate / 100);

    cout << "Total Bill after " << discountRate << "% discount: " << totalPrice << endl;

    return 0;
}
