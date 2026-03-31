#include <iostream>
using namespace std;

// Function 1: Adoption Fee Calculator
int calculateFee(int age, bool vaccinated, bool specialNeeds) {
    int fee;

    if (age < 2) {
        fee = 150;
    } else if (age <= 7) {
        fee = 100;
    } else {
        fee = 50;
    }

    if (vaccinated) {
        fee += 50;
    }

    if (specialNeeds) {
        fee -= 30;
    }

    return fee;
}

// Function 2: Apartment Suitability Check
bool isApartmentSuitable(string size, string energy) {
    if (size == "small" && (energy == "low" || energy == "medium")) {
        return true;
    }
    if (size == "medium" && energy == "low") {
        return true;
    }
    return false;
}

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