/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * LAB #12 - Intro to OOP
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : November 25, 2024
 */

#include "header.h"

using namespace std;

/*
 * Introduction to OOP
 *
 * This program uses OOP to manage Farmer Pete's animals.
 */

// main
int main() {

    int menuChoice;  // INPUT - User's menu choice
    Animal a[3];     // DATA - Animals stored in an array

    // print the header
    printHeader();

    do {
        // Display the menu
        displayMenu(a[0]);

        // Get the user's menu choice
        cin >> menuChoice;

        // Check if the input is valid
        if (cin.fail()) {
            // Clear the error flag and discard invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the rest of the line
            // Display appropriate error message
            if (a[0].GetAge() == 0) cout << "\nInvalid input. Please input a number between 0 and 1.\n";
            else cout << "\nInvalid input. Please input a number between 0 and 4.\n";
            continue; // Go back to the start of the loop
        } else if (a[0].GetAge() == 0 && menuChoice != 1 && menuChoice != 0) {
            cout << "The number " << menuChoice << " is an invalid entry.\n";
            cout << "\nPlease input a number between 0 and 1.\n";
            continue; // Go back to the start of the loop
        }

        // Additional validation for menu choices


        // Handle valid menu choices
        switch (menuChoice) {
            case 0:
                // Do nothing, exit
                break;
            case 1:
                initializeAnimals(a);
                break;
            case 2:
                changeAgeMenu(a);
                break;
            case 3:
                changeValueMenu(a);
                break;
            case 4:
                displayAnimals(a);
                break;
            default:
                cout << "\nInvalid input. Please try again.\n";
                break;
        }
    } while (menuChoice != 0);

    return 0;
}