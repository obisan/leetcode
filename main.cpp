//
// Created by dubinets on 20.03.2023.
//

#include <iostream>
#include "src/Solution_t000002_add_two_numbers.h"

int main() {
    Solution_t000002_add_two_numbers *solution = new Solution_t000002_add_two_numbers();
    ListNode node1(2, new ListNode(4, new ListNode(3)));
    ListNode node2(5, new ListNode(6, new ListNode(4)));

    solution->addTwoNumbers(&node1, &node2);

    return 0;
}