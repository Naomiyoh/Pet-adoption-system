#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "testdriven.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PetTests
{
    TEST_CLASS(AgeClassificationTests)
    {
    public:
        TEST_METHOD(NegativeAge_ReturnsInvalid)
        {
            Assert::AreEqual("Invalid", classifyPetAge(-1));
        }
        TEST_METHOD(AgeZero_ReturnsNewborn)
        {
            Assert::AreEqual("Newborn", classifyPetAge(0));
        }
        TEST_METHOD(AgeOne_ReturnsYoung)
        {
            Assert::AreEqual("Young", classifyPetAge(1));
        }
        TEST_METHOD(AgeTwo_ReturnsYoung)
        {
            Assert::AreEqual("Young", classifyPetAge(2));
        }
        TEST_METHOD(AgeThree_ReturnsAdult)
        {
            Assert::AreEqual("Adult", classifyPetAge(3));
        }
        TEST_METHOD(AgeSeven_ReturnsAdult)
        {
            Assert::AreEqual("Adult", classifyPetAge(7));
        }
        TEST_METHOD(AgeEight_ReturnsSenior)
        {
            Assert::AreEqual("Senior", classifyPetAge(8));
        }
        TEST_METHOD(AgeLarge_ReturnsSenior)
        {
            Assert::AreEqual("Senior", classifyPetAge(20));
        }
    };

    TEST_CLASS(PetMatchingTests)
    {
    public:
        TEST_METHOD(Active_ReturnsDog)
        {
            Assert::AreEqual("Dog", matchPet("active"));
        }
        TEST_METHOD(Calm_ReturnsCat)
        {
            Assert::AreEqual("Cat", matchPet("calm"));
        }
        TEST_METHOD(Busy_ReturnsFish)
        {
            Assert::AreEqual("Fish", matchPet("busy"));
        }
        TEST_METHOD(Social_ReturnsRabbit)
        {
            Assert::AreEqual("Rabbit", matchPet("social"));
        }
        TEST_METHOD(Outdoor_ReturnsBird)
        {
            Assert::AreEqual("Bird", matchPet("outdoor"));
        }
        TEST_METHOD(Unknown_ReturnsUnknown)
        {
            Assert::AreEqual("Unknown", matchPet("lazy"));
        }
        TEST_METHOD(Empty_ReturnsUnknown)
        {
            Assert::AreEqual("Unknown", matchPet(""));
        }
        TEST_METHOD(Null_ReturnsUnknown)
        {
            Assert::AreEqual("Unknown", matchPet(NULL));
        }
    };
}