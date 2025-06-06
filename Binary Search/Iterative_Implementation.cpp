// Implement Binary search on a 1-D Array.

int BinarySearch(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (target == nums[mid]) return mid; // if we find the target, we return it straightaway!
                    
            else if (target > nums[mid]) low = mid+1; // if the target is bigger than arr[mid], it will be in the right subarray.
                    
            else high = mid-1; // if the target is smaller than arr[mid], it will be in the left subarray.
        }
    return -1;
    }
