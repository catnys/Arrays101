# Array Modification: Duplicate Zeros

Given a fixed-length integer array `arr`, the task is to duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the original length of the array are not written. Perform the modifications in place on the input array without returning anything.

### Example 1:

**Input:** `arr = [1,0,2,3,0,4,5,0]`

**Output:** `[1,0,0,2,3,0,0,4]`

**Explanation:** After the function is called, the array becomes: `[1,0,0,2,3,0,0,4]`

### Example 2:

**Input:** `arr = [1,2,3]`

**Output:** `[1,2,3]`

**Explanation:** After the function is called, the array remains: `[1,2,3]`

### Constraints:

- The length of `arr` is between 1 and 10,000.
- Each element in `arr` is between 0 and 9.

