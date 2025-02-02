#include <iostream>

using namespace std;

int main() {
    bool student;
    int noOfCups;
    const double discountRate = 5.0;  // Use double for accurate division
    const int priceOfCup = 10;
    double totalPrice;
    
    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> student;

    cout << "How many cups do you want? ";
    cin >> noOfCups;

    totalPrice = noOfCups * priceOfCup;

    // Check if user is eligible for discount
    if (student || noOfCups > 15) {
        cout << "You are eligible for a discount!" << endl;
        totalPrice -= totalPrice * (discountRate / 100.0); 
    } else {
        cout << "You are not eligible for a discount." << endl;
    }

    cout << "Total Price: $" << totalPrice << endl;

    return 0;
}
