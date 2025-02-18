#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<memory>

using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> newVec = nums;
        int n = newVec.size();
        int* right = &newVec[0]; 
        int* left = &newVec[0]; 

        for(int i = 0; i < n; i++) {
            if(*right%2 == 0) { // even
                swap(left,right);
                left++;
            }
            right++;
        }
        display(newVec);
        return newVec;
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

    vector<int> numbers = {3, 1, 2, 4};
    Solution obj;
    
    vector<int> sortedNumbers = obj.sortArrayByParity(numbers);
    obj.display(sortedNumbers);
    return 0;
}
