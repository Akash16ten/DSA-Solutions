/*
In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
The twin sum is defined as the sum of a node and its twin.

Given the head of a linked list with even length, return the maximum twin sum of the linked list.

*/


class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;

        while (temp != NULL)
        {
            nums.push_back(temp -> val);
            temp = temp -> next;
        }

        int answer = INT_MIN;
        int i = 0, j = nums.size()-1;
        while (i <= j)
        {
            answer = max(answer, nums[i] + nums[j]);
            i++;
            j--;
        }
    return answer;
    }
};
