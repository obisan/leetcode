//
// Created by dubinets on 20.03.2023.
//

#ifndef LEETCODE_SOLUTION_T000002_ADD_TWO_NUMBERS_H
#define LEETCODE_SOLUTION_T000002_ADD_TWO_NUMBERS_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution_t000002_add_two_numbers {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

        ListNode
                *returnNode = nullptr,
                *prevNode = nullptr;
        int i_l1 = 0, i_l2 = 0, sum = 0, rank = 0;

        while (true) {

            i_l1 = i_l2 = sum = 0;

            ListNode *newNode = new ListNode();
            if (returnNode == nullptr)
                returnNode = newNode;
            else
                prevNode->next = newNode;

            i_l1 = (l1 != nullptr) ? l1->val : 0;
            i_l2 = (l2 != nullptr) ? l2->val : 0;
            sum = i_l1 + i_l2 + rank;
            rank = 0;

            if (l1 != nullptr)
                l1 = (l1->next != nullptr) ? l1->next : nullptr;
            if (l2 != nullptr)
                l2 = (l2->next != nullptr) ? l2->next : nullptr;

            newNode->val = sum % 10;
            prevNode = newNode;

            if (sum > 9)
                rank = 1;

            if (l1 == nullptr && l2 == nullptr) {
                if (rank == 1) {
                    prevNode->next = new ListNode(1);
                }
                break;
            }

        }

        return returnNode;

    }
};


#endif //LEETCODE_SOLUTION_T000002_ADD_TWO_NUMBERS_H
