#include <iostream>
#include <vector>
#include <limits> // Required for LLONG_MIN

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        // Use long long to handle the edge case where a number is INT_MIN.
        long long first_max = LLONG_MIN;
        long long second_max = LLONG_MIN;
        long long third_max = LLONG_MIN;
        
        for (int num : nums) {
            // Skip if the number is already one of the stored maximums.
            if (num == first_max || num == second_max || num == third_max) {
                continue;
            }
            
            // Check where the new number fits.
            if (num > first_max) {
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            } else if (num > second_max) {
                third_max = second_max;
                second_max = num;
            } else if (num > third_max) {
                third_max = num;
            }
        }
        
        // If third_max was never updated, a third distinct max does not exist.
        // Return the overall maximum.
        if (third_max == LLONG_MIN) {
            return static_cast<int>(first_max);
        }
        
        return static_cast<int>(third_max);
    }
};

// Example Usage
int main() {
    Solution solver;
    
    std::vector<int> nums1 = {3, 2, 1};
    std::cout << "Example 1: " << solver.thirdMax(nums1) << std::endl; // Output: 1

    std::vector<int> nums2 = {1, 2};
    std::cout << "Example 2: " << solver.thirdMax(nums2) << std::endl; // Output: 2

    std::vector<int> nums3 = {2, 2, 3, 1};
    std::cout << "Example 3: " << solver.thirdMax(nums3) << std::endl; // Output: 1
    
    return 0;
}
