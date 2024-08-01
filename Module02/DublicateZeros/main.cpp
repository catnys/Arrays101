#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
    }
};


int main() {

    int myArray[] = {1,0,2,3,0,4,5,0};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {1,0,2,3,0,4,5,0};

    Solution obj;
    obj.duplicateZeros(someVector);
}