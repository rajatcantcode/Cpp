#include <iostream>
#include <string>

using namespace std;

int main() {
    string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string meals[3] = {"Breakfast", "Lunch", "Dinner"};

    // Outer loop: Iterates through days of the week
    for (int day = 0; day < 7; day++) {
        cout << "Day: " << daysOfWeek[day] << endl;

        // Inner loop: Iterates through meals
        for (int meal = 0; meal < 3; meal++) {
            cout << "  Brewing 2 cups of tea for " << meals[meal] << endl;
        }
        
        cout << endl;  // New line for better formatting
    }

    return 0;
}
