// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Nov.18, 2022
// This program outputs the product of a length and width a user enter
// a while loop is used to double the length and width thus doubling the
// product.

#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int counter = 0;
    int timesInt;
    int sum = 0;
    int length;
    int width;
    std::string timesStr, wait;

    // Gets the user's length width and times run
    std::cout << "Enter a the times you would like to execute: \n";
    std::cout << ">> ";
    std::cin >> timesStr;
    std::cout << "Enter a length: \n";
    std::cout << ">> ";
    std::cin >> length;
    std::cout << "Enter a width: \n";
    std::cout << ">> ";
    std::cin >> width;

    // Tries casting the user's numbers to integers
    try {
        timesInt = std::stoi(timesStr);
        // Exception thrown if the user did not enter numbers.
    } catch (const std::exception) {
        std::cout << "You did not enter a number.\n";
        std::cout << "Please try again";
        std::cin >> wait;
    }
    // sets the maximum number for a variable.
    if (length > 100) {
        std::cout << "Please enter a number thats bellow 100.\n";
        std::cout << "Please try again\n";
        main();
    }
    if (width > 100) {
        std::cout << "Please enter a number thats bellow 100.\n";
        std::cout << "Please try again\n";
        main();
    }
    if (timesInt > 100) {
        std::cout << "Please enter a number thats bellow 100.\n";
        std::cout << "Please try again\n";
        main();
    }

    // Tells the user to restart the program if they entered negative numbers.
    if (timesInt < 0) {
        std::cout << "You must enter a positive integer.\n";
        std::cout << "Please try again\n";
        std::cin >> wait;

        // Code executed if user entered a number for length and width
    } else {
        while (timesInt >= counter) {
            counter = counter + 1;
            length = length * 2;
            width = width * 2;
            sum = length * width;
            std::cout << "Your product is " << sum << " cm^2.\n\n";
        }
    }
}
