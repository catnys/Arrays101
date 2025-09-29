#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark numbers that appear by making values at their indices negative
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;  // Convert to 0-based index
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // Find indices where values are still positive
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);  // Convert back to 1-based
            }
        }
        
        // Restore original array (optional, but good practice)
        for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        
        return result;
    }
};

// Helper function to print vectors
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ",";
    }
    cout << "]";
}

int main() {
    Solution solution;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> nums1 = {4,3,2,7,8,2,3,1};
    cout << "Input: ";
    printVector(nums1);
    cout << endl;
    vector<int> result1 = solution.findDisappearedNumbers(nums1);
    cout << "Output: ";
    printVector(result1);
    cout << endl;
    cout << "Expected: [5,6]" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> nums2 = {1,1};
    cout << "Input: ";
    printVector(nums2);
    cout << endl;
    vector<int> result2 = solution.findDisappearedNumbers(nums2);
    cout << "Output: ";
    printVector(result2);
    cout << endl;
    cout << "Expected: [2]" << endl << endl;
    
    // Test Case 3: All numbers present
    cout << "Test Case 3 (All numbers present):" << endl;
    vector<int> nums3 = {1,2,3,4,5};
    cout << "Input: ";
    printVector(nums3);
    cout << endl;
    vector<int> result3 = solution.findDisappearedNumbers(nums3);
    cout << "Output: ";
    printVector(result3);
    cout << endl;
    cout << "Expected: []" << endl << endl;
    
    // Test Case 4: Single element
    cout << "Test Case 4 (Single element):" << endl;
    vector<int> nums4 = {1};
    cout << "Input: ";
    printVector(nums4);
    cout << endl;
    vector<int> result4 = solution.findDisappearedNumbers(nums4);
    cout << "Output: ";
    printVector(result4);
    cout << endl;
    cout << "Expected: []" << endl << endl;
    
    // Test Case 5: All same number
    cout << "Test Case 5 (All same number):" << endl;
    vector<int> nums5 = {3,3,3,3,3};
    cout << "Input: ";
    printVector(nums5);
    cout << endl;
    vector<int> result5 = solution.findDisappearedNumbers(nums5);
    cout << "Output: ";
    printVector(result5);
    cout << endl;
    cout << "Expected: [1,2,4,5]" << endl;
    
    return 0;
}
