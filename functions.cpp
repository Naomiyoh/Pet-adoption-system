#include "functions.h"

// Function 1
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

// Function 2
bool isApartmentSuitable(string size, string energy) {
    if (size == "small" && (energy == "low" || energy == "medium")) {
        return true;
    }
    if (size == "medium" && energy == "low") {
        return true;
    }
    return false;
}