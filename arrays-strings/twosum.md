# Two Sum

## Difficulty
Easy

## LeetCode Link
https://leetcode.com/problems/two-sum/

## Approach
I used two nested loops to check every pair of elements in the array. If the sum of two elements equals the target, their indices are returned.

## Time Complexity
O(n²)

## Space Complexity
O(1), excluding the returned array.

## Test Cases

### Test Case 1 — Typical Case
Input:
nums = [2,7,11,15]
target = 9

Output:
[0,1]

### Test Case 2 — Edge Case
Input:
nums = [3,3]
target = 6

Output:
[0,1]

## Notes / Edge Cases
- The same element cannot be used twice.
- The input has exactly one valid solution.
- The returned indices can be in any order.

## Learning Notes
I learned how to use nested loops to find a pair of values whose sum equals the target and return their indices.