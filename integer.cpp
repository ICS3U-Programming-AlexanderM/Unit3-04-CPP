// Copyright (c) 2021 Alexander Matheson All rights reserved.
//
// Created by: Alexander matheson
// Created on: Dec 10 2021
// This program gets the user to enter a number.
// It then tells the user if the number is positive, negative or zero.
#include <iostream>


int main() {
    // declare variables
    int userNumber;

    // input
    std::cout << "What is your number? ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber > 0) {
        // output
        std::cout << userNumber << " is positive.";
    } else if (userNumber < 0) {
        // output
        std::cout << userNumber << " is negative.";
    } else {
        // output
        std::cout << userNumber << " is zero.";
    }
}
