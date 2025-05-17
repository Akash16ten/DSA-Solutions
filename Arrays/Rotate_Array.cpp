/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k % n;

    vector<int> temp;
        for (int i=0; i<k; i++)
        { 
            temp.push_back(nums[n-k+i]); 
        }

        for (int i=n-1; i>=k; i--){
            nums[i] = nums[i-k];
        }

        for (int i=0; i<k; i++)
        {
            nums[i]= temp[i];
        }
    }

