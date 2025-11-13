/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL)
        {   
            ListNode* front = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }
    return prev;
    }
};
