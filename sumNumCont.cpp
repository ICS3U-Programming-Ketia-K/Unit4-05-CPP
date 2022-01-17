// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 13, 2022
// This program asks the user how many numbers they would like
// to add together and then it uses a while loop to ask for the
// number the user wants to add and add it to the current sum.

# include <iostream>

int main() {
    // initialize loop counter and sum
    int loopCounter = 0;
    int sum = 0;
    // declare variables
    int userNumber1Int;
    int userNumber2Int;
    std::string userNumber1String;
    std::string userNumber2String;
    std::string answer;

    while (true) {
        // get user number 1 as string
        std::cout << "How many numbers would you like to add? ";
        std::cin >> userNumber1String;
        std::cout << std::endl;
    
        try {
            // convert user number 1 as string to an int
            userNumber1Int = std::stoi(userNumber1String);
        
            if (userNumber1Int >= 0) {
                // calculate the sum of the entered numbers
                while (loopCounter < userNumber1Int) {
                    std::cout <<userNumber2String<< " Enter a whole number: ";
                    std::cin >> userNumber2String;
               
                    try {
                        // convert entered number from string to an int
                        userNumber2Int = std::stoi(userNumber2String);
                        if (userNumber2Int < 0) {
                            std::cout << userNumber2Int;
                            std::cout << " cannot be added. "
                            " Please enter a whole number.\n";
                            std::cout << std::endl;
                            continue;
                        }
                    std::cout << userNumber2Int<< " added to the sum.\n";
                    std::cout << std::endl;
                    sum = sum + userNumber2Int;
                    loopCounter = loopCounter + 1;
                    answer += userNumber2String + " + ";
                    
                    } catch (std::invalid_argument) {
                    // when the user does not enter a whole number.
                        std::cout << userNumber2String << " is not a number.\n";
                        std::cout << std::endl;
                        continue;
                }
            }
                if (loopCounter == userNumber1Int) {
                    // display the sum and calculation to the user
                    std::cout << answer << "0" << " = " << sum ;
                    std::cout << std::endl;
                    std::cout << "The sum is " << sum <<std::endl;
                    break;
                }
            } else {
                std::cout <<userNumber1String<< " is not a whole number. Enter a whole number.\n";
                std::cout <<std::endl;
            
            }
        } catch(std::invalid_argument) {
            // The user did not enter a number.
            std::cout << userNumber2String << " is not a number.\n";
            std::cout <<std::endl;
        }
    }
}