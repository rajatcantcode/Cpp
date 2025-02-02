#include <iostream>

using namespace std;

int main() {
    int noOfBags;

    cout << "How many bags do you want? ";
    cin >> noOfBags;

    if (noOfBags < 20) {
        noOfBags += 10;
        cout << "Here are your " << noOfBags << " bags with complimentary ones." << endl;
    } else {
        cout << "Here are your " << noOfBags << " bags." << endl;
    }

    return 0;
}
