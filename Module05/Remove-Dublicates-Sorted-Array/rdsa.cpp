#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int size = nums.size();
        int* ptr1 = &nums[0];
        
        // DEBUG Mode
        //cout << "&nums[0]: " << &nums[0] << " &nums: " << &nums << " *ptr1: " << *ptr1 << " p1: " << ptr1 << " *ptr2: " << *ptr2 << "ptr2: " << ptr2 << endl;


        for(int i = 0; i < size; i++) {
            int* ptr2 = &nums[i];
            if(*ptr1 == *ptr2) {
                // 0 , 0
                ptr1+=1;
            } else {
                *ptr1 = *ptr2;
            }
            
            //cout << "- nums[i]: " << nums[i] << " &nums[i]: " << &nums[i] << " *ptr1: " << *ptr1 << " p1: " << ptr1 << " *ptr2: " << *ptr2 << " ptr2: " << ptr2 << endl;
        }
        return k;
    }
};



int main() {

    int myvectay[] = {0,0,1,1,1,2,2,3,4,4};
    int size = sizeof(myvectay) / sizeof(myvectay[0]); // Calculate the size of the vectay


    vector<int> someVector(myvectay, myvectay + size); // Convert vectay to vector
    cout << size << endl;

    Solution obj;
    int result = obj.removeDuplicates(someVector);

}
