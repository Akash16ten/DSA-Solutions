/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly, 
  DO NOT allocate another 2D matrix and do the rotation.

Example:
Input: 1 2 3        Output: 7 4 1
       4 5 6                8 5 2
       7 8 9                9 6 3 
*/

void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();

        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
