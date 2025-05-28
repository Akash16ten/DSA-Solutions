// Implement Binary search on a 1-D Array

int BinarySearch(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (target == nums[mid]) return mid;
            else if (target > nums[mid]) low = mid+1;
            else high = mid-1;
        }
    return -1;
    }
