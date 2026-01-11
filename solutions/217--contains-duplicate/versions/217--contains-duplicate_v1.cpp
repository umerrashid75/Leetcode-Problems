// LeetCode Problem: 217. Contains Duplicate
// Difficulty: Easy
// Pushed on: 2026-01-11

class Solution {
public:
bool containsDuplicate(vector<int>& nums)
{
unordered_set<int> seen;
for (int num : nums) {
if (seen.count(num)) {
return true;
}
seen.insert(num);
return false;
};