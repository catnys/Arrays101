#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

class Solution {
public:
    /**
     * @brief Calculates the number of students who are not in their correct positions.
     * @param heights A vector of integers representing the current heights of students.
     * @return The number of indices where the height does not match the expected sorted height.
     */
    int heightChecker(std::vector<int>& heights) {
        // 1. Create a copy of the original heights vector to represent the expected order.
        std::vector<int> expected = heights;
        
        // 2. Sort the 'expected' vector to get the correct non-decreasing order.
        std::sort(expected.begin(), expected.end());
        
        // 3. Initialize a counter for mismatches.
        int mismatch_count = 0;
        
        // 4. Iterate through the vectors to compare elements at each index.
        for (size_t i = 0; i < heights.size(); ++i) {
            // If the height at the current position is not what is expected,
            // increment the counter.
            if (heights[i] != expected[i]) {
                mismatch_count++;
            }
        }
        
        return mismatch_count;
    }
};

// Example Usage:
int main() {
    Solution solver;
    
    std::vector<int> heights1 = {1, 1, 4, 2, 1, 3};
    std::cout << "Example 1: " << solver.heightChecker(heights1) << std::endl; // Output: 3
    
    std::vector<int> heights2 = {5, 1, 2, 3, 4};
    std::cout << "Example 2: " << solver.heightChecker(heights2) << std::endl; // Output: 5

    std::vector<int> heights3 = {1, 2, 3, 4, 5};
    std::cout << "Example 3: " << solver.heightChecker(heights3) << std::endl; // Output: 0

    return 0;
}
