/*
You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

Return the head of the modified linked list.
*/


class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        if (head == NULL || head -> next == NULL) return head;

        ListNode* temp = head->next;
        int hnodekivalue = 0;

        while (temp -> val != 0)
        {
            hnodekivalue += temp -> val;
            temp = temp -> next;
        }

        ListNode* newhead = new ListNode(hnodekivalue);
        newhead -> next = NULL;
        // to ye node ab hamara head ban gya
        ListNode* cat = newhead;
        // kyoki apne head ko hame tamper nhi krna chahiye, hamne use ek naya
        // node bana kr store krdiya

        int nodekivalue = 0;
        while (temp -> next != NULL) 
        {   
            temp = temp -> next;
            while (temp -> val != 0)
            {
                nodekivalue += temp -> val;
                temp = temp -> next;
            }

            ListNode* dog = new ListNode(nodekivalue);
            cat -> next = dog;
            dog -> next = NULL;
            cat = cat -> next;
            nodekivalue = 0;
        }
    return newhead;
    }
};
