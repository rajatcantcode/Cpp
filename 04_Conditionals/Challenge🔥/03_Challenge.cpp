#include <iostream>

using namespace std;

int main() {
    int temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature >= 100) {
        cout << "Too Hot! The temperature is " << temperature << "°." << endl;
    }
    else if (temperature >= 80) {
        cout << "Perfect Temperature! The temperature is " << temperature << "°." << endl;
    }
    else {
        cout << "Too Cold! The temperature is " << temperature << "°." << endl;
    }

    return 0;
}