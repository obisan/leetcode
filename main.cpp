//
// Created by dubinets on 20.03.2023.
//

#include <iostream>
#include "src/Solution_t000002_add_two_numbers.h"
#include "stdh.h"
#include "src/Solution_t000009_palindrome_number.h"
#include "src/Solution_t000013_roman_numbers.h"

int main() {

    //Solution_t000009_palindrome_number::isPalindrome(121);
    std::cout << Solution_t000013_roman_numbers::romanToInt("III") << " 3" << std::endl;
    std::cout << Solution_t000013_roman_numbers::romanToInt("LVIII") << " 58" << std::endl;
    std::cout << Solution_t000013_roman_numbers::romanToInt("MCMXCIV") << " 1994" << std::endl;

    return 0;
}