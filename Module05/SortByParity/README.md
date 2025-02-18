# Sort Array By Parity

## Problem Description
Given an integer array `nums`, move all the even integers to the beginning of the array followed by all the odd integers. Return any array that satisfies this condition.

The solution uses a two-pointer technique to sort the array by parity. The idea is to iterate through the array and move all even numbers to the front while maintaining the relative order of the odd numbers.

## Example 1:
```
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
```
## Example 2:
```
Input: nums = [0]
Output: [0]
```
---
## Hints
## Two-Pointer Technique

```
        for(int i = 0; i < n; i++) {
            if(*right % 2 == 0) { // even
                swap(left, right);
                left++;
            }
            right++;
        }
        display(newVec);
        return newVec;
    }
```
- `right` and `left` pointers are initialized to the start of the vector.
- The loop iterates through the vector. If the element pointed to by `right` is **even**, it swaps the elements at `left` and `right`, then increments `left` (meaning move left by one).
- `right` is incremented in each iteration to move through the vector.

## Swap Function

```
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
```
The swap function swaps the values of the two pointers.
