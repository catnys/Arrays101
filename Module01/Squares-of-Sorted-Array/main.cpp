#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int sortedSquares(vector<int>& nums) {


    }
};


int main() {

    int myArray[] = {-7,-3,2,3,11};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {-7,-3,2,3,11;

    Solution obj;
    int result = obj.sortedSquares(someVector);
    cout << "Result: " << result << endl;

}