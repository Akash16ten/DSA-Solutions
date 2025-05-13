/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k,
  and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Example:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
*/

//Solution using 2 pointer approach

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int n= nums.size();

        for (int i=0; i<n; i++)
        {
            if (i>0 && nums[i] == nums[i-1]) continue;
            
            int j = i+1;
            int k = n-1;

            while (j<k)
            {
                int sum= nums[i] + nums[j] + nums[k];

                if (sum<0) j++;

                else if (sum>0) k--;

                else
                {
                    vector <int> temp = {nums[i], nums[j], nums[k]};
                    answer.push_back(temp);
                    j++;
                    k--;

                    while (j<k && nums[j] == nums[j-1])
                    {j++;}
                    while (j<k && nums[k] == nums [k+1])
                    {k--;}
                }
            }
        }
    return answer;
    }
