#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxSequence = 0;

        for(int num: nums) {
            cout << "num : " << num << endl;
            num == 1 ? maxSequence +=1 : maxSequence = 0;
        }
        
        return maxSequence;
    }
};


int main() {

    int myArray[] = {1,1,0,1,1,1};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {1,1,0,1,1,1};

    Solution obj;
    int result = obj.findMaxConsecutiveOnes(someVector);
    cout << "Result: " << result << endl;

}