/*
We have an integer target, in a given array nums, find the smallest index, such that nums[i] >= target

Example:
nums = [3 5 8 15 19]
target = 8
Output = 2 
*/

int left = 0, right = nums.size() - 1, answer = nums.size();
        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] >= target)
            {
              answer = mid;
              left = mid + 1;
            }  
            else
              left = mid + 1;
        }
        return amswer; 
    }
