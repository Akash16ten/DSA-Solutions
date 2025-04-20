/*   QUESTION:
We have an array consisting of integers, called 'nums'. We are given an integer, 'target'.
We need to return the indices of the 2 integers in 'nums', who add up to give their sum equal to the integer 'target'.
Example: [5,6,4,8,7]; Target = 12; Output: [2,3]; This is because indices 2 and 3 have 4 and 8, respectively, which add up to the 
target, that is 12.
*/


// Approach number 1:
for (int i=0; i<nums.size(); i++)
{
  for (int j=i+1; j<nums.size(); j++)
  {
    if (nums[i] + nums[j] == target)
      return {i,j};
  }
}
return -1; 
/* 
This approach is basic and easy to understand, but it's problem is, it takes O(n*n) time to get executed.
This may not be ideal for test cases with a lot of inputs, as the program will take a very long time to produce the output 
*/


// Approach number 2:
map <int,int> mpp;
for (int i=0; i<nums.size(); i++)
{
  int a = nums[i];
  int more = target - a;

  if (mpp.find(more) != mpp.end())
  return {mpp[more], i};

  mpp[a]=i;
}
return -1;
/* 
In this approach, we use a hash map. We create a variable 'a', in which we store the value of nums[i]. Then, we create
a variable 'more', in which we store 'target - a'.
Then, we check for the integer 'more' as a key inside the hashmap. If we can find the integer 'more' as a key, we return it's value
and the loop variable 'i', in that particular iteration. Returning these 2 will ensure we return the indices of the integer in the array
'nums'.
If, we can not find the key inside the hashmap, then, inside it, we store 'a' as the key, and 'i' as it's value.
This algorithm may be a bit complicated to understand, but it is optimal, and takes only O(n*logn) time.

MY SUGGESTION: Whenever you are unable to understand a piece of code, just dry run it taking some example using a pen and a paper.
Dry run using this example: [2,6,5,8,11]; Target = 14.
Create a proper array and map diagram, and write every iteration step by step.
*/
