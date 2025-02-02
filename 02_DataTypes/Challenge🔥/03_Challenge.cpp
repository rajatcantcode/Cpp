#include <iostream>
#include <string>

using namespace std;

int main() {
    string favoriteTea;
    int cups;

    cout << "What's your favorite tea? ";
    getline(cin, favoriteTea);  // Use getline to allow multi-word input

    cout << "How many cups of " << favoriteTea << " would you like? ";
    cin >> cups;

    // Displaying a fun message
    cout << "\nAwesome! Enjoy your " << cups << " cup(s) of \"" << favoriteTea << "\" tea! ☕😃\n";

    return 0;
}
