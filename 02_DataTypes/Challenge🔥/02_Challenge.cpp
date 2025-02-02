#include <iostream>
#include <cmath>   // For rounding
#include <typeinfo> // For typeid

using namespace std;

int main() {
    float basePrice, newPrice;
    
    // User input
    cout << "Enter the base price of the tea: ";
    cin >> basePrice;

    // Increase price by 10%
    newPrice = basePrice * 1.10;

    // Round the new price
    int roundedPrice = round(newPrice);

    // Display the price and type information
    cout << "\nNew Price after 10% increase: $" << newPrice
         << " (Type: " << typeid(newPrice).name() << ")\n";

    cout << "\nRounded New Price: $" << roundedPrice
         << " (Type: " << typeid(roundedPrice).name() << ")\n";

    return 0;
}
