//day1: 30th Apr
//Problem: Leetcode 206. Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;       
        ListNode* curr = head;          

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; 
            curr->next = prev;               
            prev = curr;                     
            curr = nextNode;                 
        }
        return prev;  // prev becomes the new head
    }
};
