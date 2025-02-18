# Move Zeroes

This repository contains a C++ function to move all zeros in an integer array to the end while maintaining the relative order of the non-zero elements. The function operates in-place without making a copy of the array.

## Function Description

The `moveZeroes` function takes a vector of integers as input and rearranges the elements such that all zeros are moved to the end of the array, while the relative order of the non-zero elements is preserved.


The expression `nums[lastNonZeroFoundAt++] = nums[i];` is a key part of the algorithm that moves non-zero elements to the front of the array. Let's break it down:

`nums[lastNonZeroFoundAt]`: This accesses the element at the index lastNonZeroFoundAt in the nums array. Initially, lastNonZeroFoundAt is set to 0.

`nums[i]`: This accesses the element at the current index i in the nums array. The loop iterates over each element in the array.

`nums[lastNonZeroFoundAt] = nums[i];`: This assigns the value of `nums[i]` (the current element) to `nums[lastNonZeroFoundAt]` (the position where the next non-zero element should be placed).

`lastNonZeroFoundAt++`: This _**increments**_ the lastNonZeroFoundAt variable by 1 **after the assignment**. The ++ operator is used in postfix form, so the increment happens after the current value is used in the assignment.

In summary, this line of code moves the current non-zero element to the position indicated by lastNonZeroFoundAt and then increments lastNonZeroFoundAt to point to the next position for the next non-zero element.

Here's a step-by-step example with the input `[0, 1, 0, 3, 12]`:

* Initial state: nums = [0, 1, 0, 3, 12], lastNonZeroFoundAt = 0
* First iteration (i = 0): nums[0] is 0, so nothing changes.
* Second iteration (i = 1): nums[1] is 1, so nums[0] = 1 and lastNonZeroFoundAt becomes 1.
* Third iteration (i = 2): nums[2] is 0, so nothing changes.
* Fourth iteration (i = 3): nums[3] is 3, so nums[1] = 3 and lastNonZeroFoundAt becomes 2.
* Fifth iteration (i = 4): nums[4] is 12, so nums[2] = 12 and lastNonZeroFoundAt becomes 3.
* After the first loop, the array looks like [1, 3, 12, 3, 12], and the second loop fills the remaining positions with zeros, resulting in [1, 3, 12, 0, 0].
