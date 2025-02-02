#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaTypes[6] = {"Green Tea", "Black Tea", "Oolong Tea", "Herbal Tea","",""};

    for (int i = 0; i < 6; i++) {  
        if (teaTypes[i] == "Herbal Tea") {
            cout << "Skipping Herbal Tea...\n";
            continue;  
        }
        if(teaTypes[i] == ""){
            cout << "No Tea is encountered" << endl;
            break;
        }
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }

    return 0;
}
