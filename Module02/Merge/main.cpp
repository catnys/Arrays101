#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = i;
        int lastIndex = m-1; 


        while(m != i+1){
            cout << "--- i : " << i << endl;
            display(nums1);
            if(nums1[i] < nums2[j]) {
                if(nums1[i+1] <= nums2[j] && nums1[i+1] != 0)
                    i++;
                else {
                    shiftByOne(nums1,nums1[i]);
                    nums1[i+1] = nums2[j];
                    i++; j++;
                }
            } else if(nums1[i] > nums2[j]) {
                shiftByOne(nums1,nums1[i]);
                nums1[i] = nums2[j];
                j++;
                
            } else { // Equality case
            // shift element so that we have a space
            shiftByOne(nums1,nums1[i]);
            nums1[i+1] = nums2[j];
            i++; j++;
            }
        }

        display(nums1);

    }

    void shiftByOne(vector<int>& nums1, int element) {
        // Shift elements by 1
        for(int i = nums1.size()-1; i >= 0; i--) {
            if(element == nums1[i]) {
                break;
            }
            nums1[i+1] = nums1[i];
        }
    }
    
    void display(vector<int> nums1) {
        for(int i = 0; i < nums1.size(); i++) 
            cout << " " << nums1[i];
        cout << endl;
    }
};



int main() {

    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};

    // Calculate the size of the array
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]); 

    // Convert to Vector
    vector<int> nums1Vect(nums1, nums1 + m); 
    vector<int> nums2Vect(nums2, nums2 + n); 

    Solution obj;
    obj.merge(nums1Vect, m, nums2Vect, n);

}