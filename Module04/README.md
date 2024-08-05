
# Search in an Array

This repository contains solutions and explanations for the "Search in an Array" problem from the Array 101 module on LeetCode, focusing on Linear and Binary Search methods.

## Problem Statement

Given an array of integers, `nums`, and an integer `target`, return the index of `target` in `nums`. If `target` is not present in the array, return `-1`.

## Linear Search

### Description
Linear search involves checking every element in the array until the target is found or the end of the array is reached. This method is simple but can be inefficient for large arrays as it has a time complexity of O(N).

### Edge Cases
1. The target element does not exist in the array.
2. The array is empty or null.

The function handles these edge cases by checking for the existence of the array and its length before proceeding with the search.

### Algorithm
Iterate through each element in the array:
- If the element matches the target, return its index.
- If the end of the array is reached without finding the target, return `-1`.

## Binary Search

### Description
Binary search is more efficient than linear search but requires the array to be sorted. It repeatedly divides the search interval in half, comparing the middle element to the target, and discarding half the array.

### Time Complexity
The time complexity of binary search is O(log N).
