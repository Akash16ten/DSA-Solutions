/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k 
For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

Example:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
*/

    bool search(vector<int>& nums, int target) {
       int n = nums.size();
       int low=0, high= n-1;

       while (low<=high)
       {
        int mid = (low+high)/2;
        if (target == nums[mid]) return true;

        if (nums[mid]<=nums[high])
        {
            if (target >= nums[mid] && target <= nums[high])
            low = mid+1;

            else high=mid-1;
        }

        else
        {
            if (target >= nums[low] && target <= nums[mid])
            high= mid-1;

            else low=mid+1;
        }
       }
    return false;
    }

/* This could have been the been the correct Binary Search solution. But since the array contains duplicates, the worst case time
complexity can only be O(n). Thus, the only optimal solution can be a simple linear search */

bool search(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] == target) return true;
        }
    return false;
