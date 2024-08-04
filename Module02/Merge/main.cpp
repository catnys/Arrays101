#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    }
};



int main() {

    int nums1[] = {-4,-1,0,3,10};
    int nums2[] = {-4,-1,0,3,10};

    // Calculate the size of the array
    int size1 = sizeof(nums1) / sizeof(nums1[0]); 
    int size2 = sizeof(nums2) / sizeof(nums2[0]); 

    // Convert to Vector
    vector<int> nums1Vect(nums1, nums1 + size1); 
    vector<int> nums2Vect(nums2, nums2 + size2); 

    Solution obj;
    obj.merge(nums1Vect, size1, nums2Vect, size2);

}