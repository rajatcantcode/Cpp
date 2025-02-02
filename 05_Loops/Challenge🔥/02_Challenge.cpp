#include <iostream>
#include <string>

using namespace std;

int main(){
    string userResponse;

    do {
        cout << "Would you like to have more sugar? (yes/enough): ";
        cin >> userResponse;

        // Convert the response to lowercase for case-insensitivity
        transform(userResponse.begin(), userResponse.end(), userResponse.begin(), ::tolower);

    } while (userResponse != "enough");

    cout << "Thank you! Enjoy your tea." << endl;

    return 0;
}
