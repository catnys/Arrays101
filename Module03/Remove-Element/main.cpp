#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k += 1;
            }
        }
        return k;
    }
};


int main() {

    int nums1[] = {0,1,2,2,3,0,4,2};

    // Calculate the size of the array
    int m = sizeof(nums1) / sizeof(nums1[0]);

    // Convert to Vector
    vector<int> nums1Vect(nums1, nums1 + m); 

    int val2Remove = 2;
    Solution obj;
    cout << obj.removeElement(nums1Vect,val2Remove) << endl;


}