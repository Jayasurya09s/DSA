// Leetcode Problem 136: Single Number
// here we used xor operator to solve the problem
// n^n=0
// n^0=0
// we used the property of xor operator to solve the problem

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int val : nums)
        {
            ans = ans ^ val;
        }
        return ans;
    }
};