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

    vector<int> numbers = {3, 1, 2, 4, 5, 6};
    Solution obj;
    
    vector<int> sortedNumbers = obj.sortArrayByParity(numbers);
    obj.display(sortedNumbers);

    obj.display(numbers);

    return 0;
}
