#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    int age;
    bool vaccinated, specialNeeds;
    string size, energy;

    cout << "Enter pet age: ";
    cin >> age;

    cout << "Is vaccinated? (1 = yes, 0 = no): ";
    cin >> vaccinated;

    cout << "Special needs? (1 = yes, 0 = no): ";
    cin >> specialNeeds;

    cout << "Enter size (small, medium, large): ";
    cin >> size;

    cout << "Enter energy (low, medium, high): ";
    cin >> energy;

    int fee = calculateFee(age, vaccinated, specialNeeds);
    bool suitable = isApartmentSuitable(size, energy);

    cout << "\nAdoption Fee: $" << fee << endl;

    if (suitable) {
        cout << "Good for apartment: YES" << endl;
    } else {
        cout << "Good for apartment: NO" << endl;
    }

    return 0;
}