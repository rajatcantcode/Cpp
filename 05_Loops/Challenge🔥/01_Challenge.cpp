#include <iostream>

using namespace std;

int main(){
    int noOfBags;
    
    cout << "Enter the number of tea bags left : " << endl;
    cin >> noOfBags;

    while(noOfBags != 0){
        cout << "Here are your tea bags :) - " << noOfBags << endl;
        cout << "Enter the number of tea bags left : " << endl;
        cin >> noOfBags;
    }

    cout << "Duffer ! No bags are left ! " << endl;


    return 0;
}