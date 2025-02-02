#include <iostream>
#include <string>
#include <algorithm>  // For transform()

using namespace std;

int main() {
    string orderDetail;

    cout << "Enter your order: ";
    getline(cin, orderDetail);  // Read the full order as input

    // Convert input to lowercase

    /*
    orderDetail.begin() → Iterator pointing to the first character of the string.
    orderDetail.end() → Iterator pointing past the last character.
    orderDetail.begin() → The destination where the transformed characters will be stored (overwriting the original string).
    ::tolower → Standard function to convert characters to lowercase.
    */
    transform(orderDetail.begin(), orderDetail.end(), orderDetail.begin(), ::tolower);

    // Trim spaces (if needed)

    /*
    remove(orderDetail.begin(), orderDetail.end(), ' ') -  does not actually delete characters—it just shifts non-space characters forward.
    Moves all non-space characters to the front and returns an iterator to the new end of the string.
    The returned iterator points to the new logical end of the string.

    .erase(...) -  removes the extra characters beyond this new end.
    Removes the unwanted trailing characters from the string after shifting.
    */
    orderDetail.erase(remove(orderDetail.begin(), orderDetail.end(), ' '), orderDetail.end());

    // Check order
    if (orderDetail == "greentea") {
        cout << "Your order is confirmed. Kindly wait for 5 minutes." << endl;
    } else {
        cout << "Sorry, it's not you, it's us. We can't proceed with the order right now." << endl;
    }

    return 0;
}
