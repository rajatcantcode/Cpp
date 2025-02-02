#include <iostream>
#include <algorithm>  // For the transform function

using namespace std;

int main() {
    string userSide;

    cout << "You will be granted tea unless you say no.\n";
    cout << "Do you want more tea? (yes/no): ";
    cin >> userSide;

    // Convert user input to lowercase to make the input case-insensitive
    transform(userSide.begin(), userSide.end(), userSide.begin(), ::tolower);

    do {
        cout << "Ye le bsdk chai pi\n";
        cout << "Do you want more tea? (yes/no): ";
        cin >> userSide;

        // Convert input to lowercase again after each iteration to ensure case-insensitivity
        transform(userSide.begin(), userSide.end(), userSide.begin(), ::tolower);

    } while (userSide != "no");

    cout << "Thank you for using our service!\n";

    return 0;
}