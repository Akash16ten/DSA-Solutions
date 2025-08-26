/*
You are given an integer array bloomDay, an integer m and an integer k.

You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make m bouquets from the garden. 
If it is impossible to make m bouquets return -1.

 
Example:
Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
*/

 int getmin(vector<int>& bloomDay)
    {
        int mini = INT_MAX;
        for (int i=0; i<bloomDay.size(); ++i)
        {
            mini = min(bloomDay[i], mini);
        }
    return mini;
    }

    int getmax(vector<int>& bloomDay)
    {
        int maxi = INT_MIN;
        for (int i=0; i<bloomDay.size(); ++i)
        {
            maxi = max(bloomDay[i], maxi);
        }
    return maxi;
    }

    bool possible(vector<int> &bloomDay, int day, int m, int k)
    {
        int totalboq=0, count=0;

        for(int i=0; i<bloomDay.size(); ++i)
        {
            if (bloomDay[i] <= day) count++;

            else 
            {
                totalboq += (count/k);
                count = 0;
            }
        }
        totalboq += (count/k);

        if (totalboq >= m) return true;
    return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = getmin(bloomDay), high = getmax(bloomDay);
        long long need = 1LL * m * k;
        if (need > bloomDay.size()) return -1;  

        while (low<=high)
        {   
            int mid = (low+high)/2;
            if (possible(bloomDay, mid, m, k) == true) high=mid-1;

            else low=mid+1;
        }
    return low;
    }
