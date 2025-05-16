/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
  and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
*/

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector <vector<int>> answer;

        for (int i=0; i<n; i++){
                if (answer.empty() || intervals[i][0] > answer.back()[1])
                {
                    answer.push_back(intervals[i]);
                }
        
                else{
                    answer.back()[1] = max (answer.back()[1], intervals[i][1]);
                }
            }
            return answer;
            }
