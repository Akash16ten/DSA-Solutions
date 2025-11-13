/*
Given the head of a linked list head, in which each node contains an integer value.
Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.
Return the linked list after insertion.
The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
*/


class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while (temp != NULL && temp -> next != NULL)
        {
            ListNode* x = new ListNode(gcd(temp->val, temp->next->val));
            x -> next = temp -> next;
            temp -> next = x;

            temp = temp -> next -> next;
        }
    return head;
    }
};
