//day7: 6th April
//Problem: Leetcode 61. Rotate List

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Count the length of the list
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // Step 2: Make the list circular
        tail->next = head;

        // Step 3: Find the new tail (length - k % length - 1) and new head
        k = k % length;
        int stepsToNewTail = length - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; ++i) {
            newTail = newTail->next;
        }

        // Step 4: Break the circle and return new head
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
