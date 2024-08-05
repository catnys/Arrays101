#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[k] = nums[i];
                k += 1;
            }
        }
        return k;
    }
};


int main() {

    int nums1[] = {0,1,2,2,3,4};

    // Calculate the size of the array
    int m = sizeof(nums1) / sizeof(nums1[0]);

    // Convert to Vector
    vector<int> nums1Vect(nums1, nums1 + m); 

    Solution obj;
    cout << obj.removeDuplicates(nums1Vect) << endl;

    for(size_t i = 0; i < m; i++) {
        cout << nums1Vect[i] << " ";
    }


}