//
// Created by Jawad Khadra on 11/25/24.
//

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include "animalClass.h"

using namespace std;

/*
 * printHeader
 * prints the header for the program
 */
void printHeader();

/*
 * displayMenu
 * displays the menu for the program
 */
void displayMenu(Animal a /* Only need the first element of the array to check if its initialized */);

/*
 * initializeAnimals
 * initializes the animals
 */
void initializeAnimals(Animal a[]);

/*
 * changeAgeMenu
 * changes the age of an animal through a sub-menu
 */
void changeAgeMenu(Animal a[]);

/*
 * changeValueMenu
 * changes the value of an animal through a sub-menu
 */
void changeValueMenu(Animal a[]);

/*
 * displayAnimals
 * displays the animals
 */
void displayAnimals(Animal a[]);

#endif //HEADER_H
