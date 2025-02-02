#include <iostream>
#include <string>
#include <algorithm> // For transform

using namespace std;

int main() {
    // Array of tea types
    string teaTypes[4] = {"Green Tea", "Black Tea", "Oolong Tea", "Herbal Tea"};
    string userResponse;

    // Loop through the tea types
    for (int i = 0; i < 4; i++) {
        cout << "Do you like " << teaTypes[i] << "? (yes/no): ";
        cin >> userResponse;

        // Convert the user response to lowercase for case insensitivity
        transform(userResponse.begin(), userResponse.end(), userResponse.begin(), ::tolower);

        // If the user dislikes Green Tea, skip brewing it
        if (teaTypes[i] == "Green Tea" && userResponse == "no") {
            cout << "Skipping " << teaTypes[i] << "...\n";
            continue; // Skip to the next iteration
        }

        // Brew the tea if the user likes it
        cout << "Brewing " << teaTypes[i] << "...\n";
    }

    cout << "Tea brewing completed!\n";
    return 0;
}
