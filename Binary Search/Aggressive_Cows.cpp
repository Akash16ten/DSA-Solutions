/*
You are given an array with unique elements of stalls[], which denotes the positions of stalls. 
You are also given an integer k which denotes the number of aggressive cows. 
The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

Example:
Input: stalls[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows in this case is 3, which is the largest among all possible ways.
*/

bool check (vector<int>& stalls, int dist, int k)
    {
        int cntcows=1, last= nums[0];

        for (int i=0; i<nums.size(); ++i)
        {
            if (nums[i] - last >= dist)
            {
                cntcows++;
                last = nums[i];
            }
        }
        if (cntcows >= k) return true;
    return false;
    }

    int maxDistance(vector<int>& slass, int m) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0, high = nums[n-1] - nums[0];

        while (low <= high)
        {
            int mid = (low+high)/2;
            if (check (nums, mid, m) == true) low = mid +1;
            else
            high = mid - 1;
        }
    return high;
    }
