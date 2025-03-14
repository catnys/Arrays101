#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Index for elements to keep

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move the element to the k-th position
                k++; // Increment k
            }
        }

        return k; // Return the number of elements not equal to val
    }
};

// Example usage:
int main() {
    Solution solution;
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int k1 = solution.removeElement(nums1, val1);
    // Output: 2, nums1 = [2, 2, ...]

    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int k2 = solution.removeElement(nums2, val2);
    // Output: 5, nums2 = [0, 1, 3, 0, 4, ...]

    return 0;
}
