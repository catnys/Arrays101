# Remove Element

## Problem Description

The task is to remove all occurrences of a specified integer `val` from an integer array `nums` in-place. The order of the elements may be changed, and the function should return the number of elements in `nums` that are not equal to `val`.

### Requirements

- Modify the array `nums` such that the first `k` elements contain the elements which are not equal to `val`.
- The remaining elements of `nums` are not important, as well as the size of `nums`.
- Return `k`, the number of elements in `nums` which are not equal to `val`.

## Examples

### Example 1

- **Input:** `nums = [3,2,2,3]`, `val = 3`
- **Output:** `2, nums = [2,2,,]`
- **Explanation:** The function should return `k = 2`, with the first two elements of `nums` being `2`. It does not matter what you leave beyond the returned `k`.

### Example 2

- **Input:** `nums = [0,1,2,2,3,0,4,2]`, `val = 2`
- **Output:** `5, nums = [0,1,4,0,3,,,_]`
- **Explanation:** The function should return `k = 5`, with the first five elements of `nums` containing `0, 0, 1, 3, and 4`. The order of these elements can be arbitrary.

## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`

```java

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
// It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```
