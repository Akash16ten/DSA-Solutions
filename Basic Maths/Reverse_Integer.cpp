/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example:
Input: x = 123
Output: 321
*/

int reverse(int x) {
        int revno=0;
        while (x!=0)
        {
            int lastdig= x%10;

            if (revno > INT_MAX/10 || (revno == INT_MAX/10 && lastdig > 7))  return 0;
            if (revno < INT_MIN/10 || (revno == INT_MIN/10 && lastdig < -8)) return 0;
            revno = (revno * 10) + lastdig;

            x=x/10;
        }
    return revno;    
    }
