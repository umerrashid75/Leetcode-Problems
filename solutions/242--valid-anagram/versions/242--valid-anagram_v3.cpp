// LeetCode Problem: 242. Valid Anagram
// Difficulty: Easy
// Pushed on: 2026-02-11

bool isAnagram(string s, string t)
if (s.length() != t.length()) return false;
std::sort(s.begin(), s.end());
std::sort(t.begin(), t.end());
return s == t;
}
public:
class Solution {
{
};