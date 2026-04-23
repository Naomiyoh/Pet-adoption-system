#include "testdriven.h"
#include <string.h>

const char* classifyPetAge(int age, int isVaccinated) {
    if (age < 0) {
        return "Invalid";
    }
    else if (age == 0) {
        return "Newborn";
    }
    else if (age <= 2) {
        return "Young";
    }
    else if (age <= 7) {
        return "Adult";  // keep same idea, ignore vaccination for simplicity
    }
    else {
        return "Senior";
    }
}

const char* matchPet(const char* lifestyle, int hasAllergies) {
    if (lifestyle == NULL || strlen(lifestyle) == 0) {
        return "Unknown";
    }
    else if (strcmp(lifestyle, "active") == 0) {
        return "Dog";   // keep same outputs
    }
    else if (strcmp(lifestyle, "calm") == 0) {
        return "Cat";
    }
    else if (strcmp(lifestyle, "busy") == 0) {
        return "Fish";
    }
    else if (strcmp(lifestyle, "social") == 0) {
        return "Rabbit";
    }
    else if (strcmp(lifestyle, "outdoor") == 0) {
        return "Bird";
    }
    else {
        return "Unknown";
    }
}

int calculatePetCareCost(int foodCost, int vetCost, int groomingCost) {
    if (foodCost < 0 || vetCost < 0 || groomingCost < 0) {
        return -1;
    }
    return foodCost + vetCost + groomingCost;
}

const char* recommendAdoptionPlan(int age, const char* lifestyle, int budget) {
    if (age < 0 || lifestyle == NULL || budget < 0) {
        return "Invalid";
    }
    else if (budget < 100) {
        return "Basic";
    }
    else if (age > 7) {
        return "Senior Care";
    }
    else {
        return "Standard";
    }
}
