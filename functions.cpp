//
// Created by Jawad Khadra on 11/25/24.
//

#include "header.h"

using namespace std;


/*
 * printHeader
 * prints the header for the program
 */
void printHeader() {
    cout
    << " * AUTHOR : Jawad Khadra\n"
    << " * STUDENT ID : 1312092 (IVC)\n"
    << " * LAB #12 - Intro to OOP\n"
    << " * CLASS : CS1B\n"
    << " * SECTION : MW: 7:30p - 9:50p\n"
    << " * DUE DATE : November 25, 2024\n";
}

/*
 * displayMenu
 * displays the menu for the program
 */
void displayMenu(Animal a /* Only need the first element of the array to check if its initialized */) {
    if (a.GetAge() == 0) {
        cout
        << "\n\n"
        << "1 - Initialize Animals\n"
        << "0 - Exit\n";
    } else {
        cout
        << "\n\n"
        << "1 - Initialize Animals\n"
        << "2 - Change Age\n"
        << "3 - Change Value\n"
        << "4 - Display\n"
        << "0 - Exit\n";
    }
    cout << "Enter Selection: ";
}

/*
 * initializeAnimals
 * initializes the animals
 */
void initializeAnimals(Animal a[]) {

    // initialize the animals, but first, output to the console to inform the user
    cout << "\n\nInitializing Fluffy, Maa, & Babe...\n";

    a[0].SetInitialValues("Fluffy", "Sheep", 1, 15000);
    a[1].SetInitialValues("Maa", "Sheep", 3, 16520);
    a[2].SetInitialValues("Babe", "Pig", 2, 10240.67);
}

/*
 * changeAgeMenu
 * changes the age of an animal through a sub-menu
 */
void changeAgeMenu(Animal a[]) {

    int choice; // INPUT - User's choice for the animal
    int newAge; // INPUT - New age for an animal

    cout
    << "\n\nCHANGE AGE:\n"
    << "1 - Fluffy\n"
    << "2 - Maa\n"
    << "3 - Babe\n"
    << "Select an animal you'd like to change: ";

    cin >> choice;

    if (choice < 1 || choice > 3) cout << "The number " << choice << " is an invalid entry.\n";
    if (cin.fail() || choice < 1 || choice > 3) {
        cout << "\n\nPlease input a number between 1 and 3.\n";
        cin.clear();
        cin.ignore();
        return;
    }

    cout << "\nNEW AGE: ";
    cin >> newAge;

    if (cin.fail()) {
        cout << "\n\nInvalid input. Please try again.\n";
        cin.clear();
        cin.ignore();
        return;
    }

    // Instead of a switch, just take out one and use it in the array
    choice--;

    cout << "Changing " << a[choice].GetName() << "'s age to " << newAge << "...\n";
    a[choice].ChangeAge(newAge);
}

/*
 * changeValueMenu
 * changes the value of an animal through a sub-menu
 */
void changeValueMenu(Animal a[]) {

    int choice; // INPUT - User's choice for the animal
    float newValue; // INPUT - New value for an animal

    cout
    << "\n\nCHANGE VALUE:\n"
    << "1 - Fluffy\n"
    << "2 - Maa\n"
    << "3 - Babe\n"
    << "Select an animal you'd like to change: ";

    cin >> choice;

    if (choice < 1 || choice > 3) cout << "The number " << choice << " is an invalid entry.\n";
    if (cin.fail() || choice < 1 || choice > 3) {
        cout << "\n\nPlease input a number between 1 and 3.\n";
        cin.clear();
        cin.ignore();
        return;
    }

    cout << "\nNEW VALUE: ";
    cin >> newValue;

    if (cin.fail()) {
        cout << "\n\nInvalid input. Please try again.\n";
        cin.clear();
        cin.ignore();
        return;
    }

    // Instead of a switch, just take out one and use it in the array
    choice--;

    cout << "Changing " << a[choice].GetName() << "'s value to " << newValue << "...\n";
    a[choice].ChangeValue(newValue);
}

/*
 * displayAnimals
 * displays the animals
 */
void displayAnimals(Animal a[]) {
    cout
    << "\n\n"
    << "ANIMAL     NAME           AGE    VALUE   \n"
    << "---------- -------------- --- -----------\n";
    for (int i = 0; i < 3; i++) a[i].Display();
}