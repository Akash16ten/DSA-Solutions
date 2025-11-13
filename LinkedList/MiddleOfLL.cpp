/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      /*  ListNode* temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp -> next;
        }

        int mid= count/2;

        ListNode* dog = head;
        for (int i=0; i<mid; i++)
        {
            dog = dog -> next;
        }
    return dog;
    */

    ListNode* fast = head;
    ListNode* slow = head;

    while (fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
    }
};
