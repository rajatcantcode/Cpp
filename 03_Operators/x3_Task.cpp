#include <iostream>

using namespace std;

int main(){
    int noOfCups;

    cout << "Enter number of cups: ";
    cin >> noOfCups;

    if (noOfCups > 10 && noOfCups < 20){
        cout << "Silver Badge";
    }
    else if(noOfCups >= 20){
        cout << "Gold Badge";

    }

    return 0;
}

