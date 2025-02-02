#include <iostream>
#include <string>

using namespace std;

int main() {
    string typeOfTea;
    float priceOfTea;
    char rating;

    cout << "Enter the type of tea: ";
    getline(cin, typeOfTea);  // Use getline to allow spaces in tea name

    cout << "Enter the price per kilogram: ";
    cin >> priceOfTea;

    cout << "Enter the rating: ";
    cin >> rating;

    // Formatted Output
    cout << "\nTea Information:\n";
    cout << "Type: \"" << typeOfTea << "\"\n";
    cout << "Price per kg: $" << priceOfTea << "\n";
    cout << "Rating: " << rating << "\n";

    return 0;
}
