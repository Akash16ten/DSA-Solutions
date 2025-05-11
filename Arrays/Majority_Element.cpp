/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

int majorityElement(vector<int>& nums) {
         map <int, int> mpp;
        for (int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it: mpp){
            if (it.second>(nums.size()/2))
            return it.first;
        }
    return -1;
    }
