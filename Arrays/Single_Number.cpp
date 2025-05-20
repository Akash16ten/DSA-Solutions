/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example:
Input: nums = [2,2,1]
Output: 1
*/

int singleNumber(vector<int>& nums) {
        
    int n = nums.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }

    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}
