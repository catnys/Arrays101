#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 5;
        return a;
    }
};



int main() {

    int myvectay[] = {17,18,5,4,6,1};
    int size = sizeof(myvectay) / sizeof(myvectay[0]); // Calculate the size of the vectay


    vector<int> someVector(myvectay, myvectay + size); // Convert vectay to vector
    cout << size << endl;

    Solution obj;
    int result = obj.removeDuplicates(someVector);

}
