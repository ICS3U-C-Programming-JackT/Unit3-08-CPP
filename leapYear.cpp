// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 3, 2025
// Leap year determining program in python

#include <iostream>
#include <string>

int main() {
    // Create variables for year as int and string
    std::string yearString = "";
    int yearInt;

    // Ask for year, set vars to it
    std::cout << "Please enter your age: ";
    std::cin >> yearString;

    // try catch converting string to int to prevent errors
    try {
        yearInt = std::stoi(yearString);

        // if statements to check if leap year
        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << "It's a leap year" << std::endl;
                } else {
                    std::cout << "It's not a leap year" << std::endl;
                }
            } else {
                std::cout << "It's a leap year" << std::endl;
            }
        } else {
            std::cout << "It's not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        // Tell user to enter proper year
        std::cout << "Please make sure to enter a number, not a string!"
                  << "You entered " << yearString;
        main();
    }
    std::cout << "Thanks for playing!";
}
