
# Replace Elements with Greatest Element on Right Side

## Problem Description

Given an array `arr`, replace every element in that array with the greatest element among the elements to its right, and replace the last element with `-1`. The goal is to transform the array according to these rules and return the modified array.

### Example 1

- **Input:** `arr = [17,18,5,4,6,1]`
- **Output:** `[18,6,6,6,1,-1]`

**Explanation:**
- Index 0: The greatest element to the right of index 0 is `18`.
- Index 1: The greatest element to the right of index 1 is `6`.
- Index 2: The greatest element to the right of index 2 is `6`.
- Index 3: The greatest element to the right of index 3 is `6`.
- Index 4: The greatest element to the right of index 4 is `1`.
- Index 5: There are no elements to the right of index 5, so we put `-1`.

### Example 2

- **Input:** `arr = [400]`
- **Output:** `[-1]`

**Explanation:**
- There are no elements to the right of index 0, so the output is `-1`.

## Constraints

- The length of the array (`1 <= arr.length <= 10^4`).
- The value of each element in the array (`1 <= arr[i] <= 10^5`).

## Solution Approach

The problem can be solved by iterating through the array from right to left. At each step, we keep track of the greatest element we have seen so far (which starts as `-1` for the last element). As we move leftward, we replace each element with the current greatest element and update the greatest element if the current element is greater.

### Steps:
1. Initialize `greatest` as `-1` (since the last element should be `-1`).
2. Traverse the array from the last element to the first.
3. For each element, replace it with `greatest`.
4. Update `greatest` to be the maximum of the current element and the previous `greatest`.

### Complexity
- **Time Complexity:** O(n), where n is the length of the array. We only pass through the array once.
- **Space Complexity:** O(1), as the replacement is done in-place.

## Example Code

```python
def replaceElements(arr):
    greatest = -1
    for i in range(len(arr) - 1, -1, -1):
        arr[i], greatest = greatest, max(greatest, arr[i])
    return arr
```

## Conclusion

This problem is an excellent exercise for practicing array manipulation and understanding in-place modifications. The efficient approach leverages a single pass through the array, making it optimal for large input sizes.
