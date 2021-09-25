// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is the grandmother's blessing giver program

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // This function checks if the user is rich or handsome
    std::string isRich;
    std::cout << "Are you rich?: ";
    std::cin >> isRich;
    // thispointer.com
    // /converting-a-string-to-upper-lower-case-in-c-using-stl-boost-library/
    std::for_each(isRich.begin(), isRich.end(), [](char & c) {
        c = ::tolower(c);
    });

    std::string isHandsome;
    std::cout << "Are you good looking?: ";
    std::cin >> isHandsome;
    // thispointer.com
    // /converting-a-string-to-upper-lower-case-in-c-using-stl-boost-library/
    std::for_each(isHandsome.begin(), isHandsome.end(), [](char & c) {
        c = ::tolower(c);
    });

    if (isRich == "yes" && isHandsome == "yes") {
        std::cout << "You can absolutely date my grandchild!" << std::endl;
    } else if (isRich == "yes") {
        std::cout << "You can date my granchild with your riches!";
        std::cout << "" << std::endl;
    } else if (isHandsome == "yes") {
        std::cout << "You and my grandchild can make a beautiful pair!";
        std::cout << "" << std::endl;
    } else if (isRich == "no" && isHandsome == "no") {
        std::cout << "Then, you can not date my grandchild!" << std::endl;
    } else {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone.";
}
