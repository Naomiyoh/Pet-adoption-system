int calculateFee(int age, int vaccinated, int specialNeeds) {
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

int isApartmentSuitable(const char* size, const char* energy) {
    if (strcmp(size, "small") == 0 && 
       (strcmp(energy, "low") == 0 || strcmp(energy, "medium") == 0)) {
        return 1;
    }

    if (strcmp(size, "medium") == 0 && strcmp(energy, "low") == 0) {
        return 1;
    }

    return 0;
}
