/*
You are given a 0-indexed array of strings words and a character x.
Return an array of indices representing the words that contain the character x.
Note that the returned array may be in any order.

 

Example:
Input: words = ["ice","cream"], x = "e"
Output: [0,1]
Explanation: "e" occurs in both words: "ice", and "cream". Hence, we return indices 0 and 1.
*/

vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> answer;

        for (int i=0; i<words.size(); i++)
        {
            for (int j=0; j<words[i].size(); j++)
            {
                if (words[i][j] == x){
                answer.push_back(i);
                break;
                }
            }
        }
    return answer;
    }
