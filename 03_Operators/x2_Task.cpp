#include <iostream>

using namespace std;

int main(){
    int noOfBags;

    cout << "Bags no: ";
    cin >> noOfBags;

    if (noOfBags < 10){
        noOfBags += 5;
        cout << noOfBags;
    }
    else{
        cout << noOfBags;
    }

    return 0;
}