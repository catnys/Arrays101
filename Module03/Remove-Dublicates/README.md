# Remove Duplicates from Sorted Array

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.

Consider the number of unique elements in `nums` to be `k`, to get accepted, you need to do the following things:

1. Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.
2. Return `k`.

## Custom Judge:

The judge will test your solution with the following code:

```cpp
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length.
// It is sorted with no duplicates.

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Example 1:

**Input:** `nums = [1,1,2]`  
**Output:** `2, nums = [1,2,_]`  
**Explanation:** Your function should return `k = 2`, with the first two elements of `nums` being `1` and `2`.  
It does not matter what you leave beyond the returned `k` (hence they are underscores).

## Example 2:

**Input:** `nums = [0,0,1,1,1,2,2,3,3,4]`  
**Output:** `5, nums = [0,1,2,3,4,_,_,_,_,_]`  
**Explanation:** Your function should return `k = 5`, with the first five elements of `nums` containing `0, 1, 2, 3, and 4`.  
Note that the five elements can be returned in any order.  
It does not matter what you leave beyond the returned `k` (hence they are underscores).

## Constraints:

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

## Hints:

1. Make sure you understand the requirements of the problem statement, which elements need to be retained and in what order.
2. Consider using two pointers to keep track of the current index of the array and the index for the next unique element.
3. Iterate through the array and only keep elements that are unique compared to their previous element.
