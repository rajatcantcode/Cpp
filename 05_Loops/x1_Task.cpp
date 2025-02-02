#include <iostream>

using namespace std;

int main(){
    int noOfCups;

    cout << "Enter the number of cups ";
    cin >> noOfCups;

    while(noOfCups--){
        cout << "In Making..." << noOfCups << endl;
    }
    cout << "All Orders are completed." << endl;

    return 0;
}