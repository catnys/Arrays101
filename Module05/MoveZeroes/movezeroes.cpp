#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
     void moveZeroes(vector<int>& nums) {
        display(nums);

        int* firstNonZero = &nums[0];     // Points to Non-Zero element
        int* firstZero = &nums[0]; // Points to Zero
        
        // iterate through index
        for(int i = 0; i <= nums.size(); i++) {
            // find first zeros
            cout << "i : " << i << "\t nums[i]: " << nums[i];

             if(nums[i] == 0) { // if zero found
                cout << "\t Zero found!";
                for(int j = i; j <= nums.size(); j++) {
                    // find nz's
                    cout << "\t * j: " << j << "  non-Zero: " << firstNonZero << " ; Zero : " << firstZero << endl;

                }
            } 
            cout << endl;

        }
        

    }

    void swap(int*a , int*b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void display(vector<int>& vec) {
         // Displaying the elements
        for (int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }
};


int main() {
    
    int myvect[] = {0,1,0,3,12,0};
    int size = sizeof(myvect) / sizeof(myvect[0]); // Calculate the size of the vectay


    vector<int> someVector(myvect, myvect + size); // Convert vectay to vector
    cout << "size of the vector: " << size << endl;

    Solution obj;
    obj.moveZeroes(someVector);

    return 0;
}
