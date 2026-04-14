#include "testdriven.h"
#include <string.h>

const char* classifyPetAge(int age) {
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
        return "Adult";
    }
    else {
        return "Senior";
    }
}

const char* matchPet(const char* lifestyle) {
    if (lifestyle == NULL || strlen(lifestyle) == 0) {
        return "Unknown";
    }
    else if (strcmp(lifestyle, "active") == 0) {
        return "Dog";
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