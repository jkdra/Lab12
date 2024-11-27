//
// Created by Jawad Khadra on 11/25/24.
//

#ifndef ANIMALCLASS_H
#define ANIMALCLASS_H

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:

        Animal() {
            name = "";
            type = "";
            age = 0;
            value = 0;
        }
        ~Animal() {}

        void SetInitialValues(string aName, string aType, int aAge, float aValue) {
            name = aName;
            type = aType;
            age = aAge;
            value = aValue;
        }
        void ChangeAge(int aAge) { age = aAge; }
        void ChangeValue(float aValue) { value = aValue; }
        void Display() const {
            cout
            << left << setw(10) << type << " "
            << setw(14) << name << " "
            << right << setw(3) << age << " "
            << setw(11) << fixed << setprecision(2) << value << endl;
        }
        string GetName() const { return name; }
        string GetType() const { return type; }
        int GetAge() const { return age; }
        float GetValue() const;

    private:
        string name;
        string type;
        int age;
        float value;
};


#endif //ANIMALCLASS_H
