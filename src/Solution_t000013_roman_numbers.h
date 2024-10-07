//
// Created by dubinets on 07.10.2024.
//

#ifndef LEETCODE_SOLUTION_T000013_ROMAN_NUMBERS_H
#define LEETCODE_SOLUTION_T000013_ROMAN_NUMBERS_H


class Solution_t000013_roman_numbers {

        public: static int romanToInt(const std::string s) {

        std::map<char,int> dict{
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}};

        int result = 0;
        int prevCount = 0;
        int currentCount = 0;
        bool reversed = false;
        for (auto a = s.rbegin(); a != s.rend() ; a++) {
            currentCount = dict[*a];
            if (currentCount < prevCount) {
                reversed = true;
            } else if (currentCount > prevCount) {
                reversed = false;
            }

            if (reversed) {
                result = result - currentCount;
            } else {
                result = result + currentCount;
            }
            prevCount = currentCount;
        }

        return result;
    }

};


#endif //LEETCODE_SOLUTION_T000013_ROMAN_NUMBERS_H
