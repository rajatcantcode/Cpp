#include <iostream>

using namespace std;

int main(){
    int noOfBags;

    cout << "Enter the number of bags ? " << endl;
    cin >> noOfBags;

    for(int i = 1 ; i <= noOfBags ; i++){
        cout << 2 * i << endl;
    }

    return 0;
}