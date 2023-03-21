//
// Created by dubinets on 21.03.2023.
//

#ifndef LEETCODE_SOLUTION_T000009_PALINDROME_NUMBER_H
#define LEETCODE_SOLUTION_T000009_PALINDROME_NUMBER_H


class Solution_t000009_palindrome_number {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x!=0 && x%10==0) {
            return false;
        }
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (x == rev || x == rev/10);
    }
};


#endif //LEETCODE_SOLUTION_T000009_PALINDROME_NUMBER_H
