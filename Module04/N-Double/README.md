# Check If N and Its Double Exist

## Problem Description
Given an array `arr` of integers, check if there exists two distinct indices `i` and `j` such that:
- `arr[i] == 2 * arr[j]`

### Constraints
- The array `arr` may contain both positive and negative integers or zero.
- You need to find whether there's a pair `(i, j)` such that `arr[i] == 2 * arr[j]`.

### Examples
1. `arr = [10, 2, 5, 3]` returns `true` (Because 10 is double of 5)
2. `arr = [7, 1, 14, 11]` returns `true` (Because 14 is double of 7)
3. `arr = [3, 1, 7, 11]` returns `false`

### Solution Approach
To solve this problem, you can use a hash set to keep track of the elements seen so far. For each element `x` in the array, check if `2*x` or `x/2` is already in the set. If so, return true. Otherwise, add `x` to the set and continue checking the next element.
