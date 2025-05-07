//day2: 1st May
//Problem: Leetcode 876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        int middle = cnt / 2;
        temp = head;
        for (int i = 0; i < middle; i++) {
            temp = temp -> next;
        }

        return temp;
    }
};
