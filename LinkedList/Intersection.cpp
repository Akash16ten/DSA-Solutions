/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* tempa = headA;
        ListNode* tempb = headB;
        int counta = 0, countb =0;

        while (tempa != NULL)
        {
            counta ++;
            tempa = tempa -> next;
        }

        while (tempb != NULL)
        {
            countb ++;
            tempb = tempb -> next;
        }

        int diff = abs(counta - countb);

        ListNode* ptra = headA;
        ListNode* ptrb = headB;
        if (counta > countb) 
        {
            for (int i=0; i<diff; i++)
            {
                ptra = ptra -> next;
            }
        }


        else if (counta < countb) 
        {
            for (int i=0; i<diff; i++)
            {
                ptrb = ptrb -> next;
            }
        }


        while (ptra != NULL && ptrb != NULL)
        {
            if (ptra == ptrb) return ptra;
            ptra = ptra -> next;
            ptrb = ptrb -> next;
        }   
    return NULL;
    }
};
