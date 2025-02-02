#include <iostream>
#include <algorithm>  // For the transform function

using namespace std;

int main() {
    string userSide;
    int noOfCups;

    cout << "You will be granted tea unless you say 'stop'.\n";

    cout << "How many cups of tea would you like? ";
    cin >> noOfCups;

    
    // Loop to provide tea until user says "stop"
    while (true) {
    
        // Serve the tea and print the message
        for (int i = 0; i < noOfCups; i++) {
            cout << "Ye le bsdk, " << i+1 << " chai pi!\n"; // Inform the user they're getting tea
        }

        cout << "Do you want more tea? (yes/stop): ";
        cin >> userSide;

        // Convert the input to lowercase to ensure case insensitivity
        transform(userSide.begin(), userSide.end(), userSide.begin(), ::tolower);

        if (userSide == "stop") {
            break;
        }else{
            cout << "How many cups do you want? ";
            cin >> noOfCups;
        }

    }

    // Thank the user for using the service
    cout << "Thank you for using our service!\n";

    return 0;
}