// LeetCode Problem: 217. Contains Duplicate
// Difficulty: Easy
// Pushed on: 2026-01-11

class Solution {
public:
bool containsDuplicate(vector<int>& nums)
{
for (int i = 0 ; i < nums.size()-1; i++)
if(nums[i] == nums[i+1])
}
return false;
sort(nums.begin(), nums.end());
return true;
};