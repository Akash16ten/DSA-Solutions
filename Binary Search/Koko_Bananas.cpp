/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. 
The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. 
If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.


Example:
Input: piles = [3,6,7,11], h = 8
Output: 4
*/

int getmax(vector<int>& piles)
    {   
        int maxi = INT_MIN;
        for (int i=0; i<piles.size(); ++i)
        {
            maxi = max(piles[i], maxi);
        }
    return maxi;
    }

    long long counthours (vector<int>& piles, int hourly)
    {
        long long totalhours = 0;
        for (int i=0; i<piles.size(); i++)
        {
            totalhours += ceil( (double)piles[i] / (double)hourly );
        }
    return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = getmax(piles);

        while (low <= high)
        {
            int mid = (low + high)/2;
            long long totalhours = counthours(piles, mid);

            if (totalhours <= h) high = mid -1;

            else low = mid+1;
        }
    return low;
    }
