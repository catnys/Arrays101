#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) return 0;
        if(size == 1) return 1;

        int k = 0;
        int *master = &nums[1];
        int *watcher = &nums[1];
        for(int i = 0; i < size; i++) {
            if(*master != *watcher){
                // Change
                *master = *watcher;
                k++;
            }
            watcher++;
            //cout << i << ": "<< "k: " << k << " - nums[i]: " << nums[i] << " &nums[i]: " << &nums[i] << " *watcher: " << *watcher << " watcher: " << watcher << " *master: " << *master << " master: " << master << endl;
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
    cout << "k: " << result << endl;

}
