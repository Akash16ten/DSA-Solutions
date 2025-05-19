/*
Given an array nums of n integers where nums[i] is in the range [1, n], 
  return an array of all the integers in the range [1, n] that do not appear in nums.

Example :
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
*/

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int maxx=0;
        for (int i=0; i<n; i++)
        {
            maxx= max (maxx, nums[i]);
        }

        vector <int> hash (maxx+1, 0);
        vector <int> answer;

        for (int i=0; i<n; i++)
        {
            hash[nums[i]]+=1;
        }

        for (int i=1; i<maxx+1; i++)
        {
            if (hash[i]==0)
            {
                answer.push_back(i);
            }
        }
    return answer;
    }
