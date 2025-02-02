#include <iostream>

using namespace std;

int main() {
    bool teaShopStatus;
    int currentTime; // 24-hour format

    cout << "Enter the current time in 24-hour format (e.g., 8 for 8 AM, 20 for 8 PM): ";
    cin >> currentTime;

    // Check if the shop is open (8 AM - 8 PM)
    if (currentTime >= 8 && currentTime <= 20) {
        teaShopStatus = 1;
        cout << "The tea shop is open." << endl;
    } else {
        teaShopStatus = 0;
        cout << "The tea shop is closed." << endl;
    }

    return 0;
}
