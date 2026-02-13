// LeetCode Problem: 9. Palindrome Number
// Difficulty: Easy
// Pushed on: 2026-02-13

while(x>rev)
{
rev= rev*10 + x%10;
return false;
}
int rev = 0;
x = x/10;
return x == rev ||x ==rev/10;
};