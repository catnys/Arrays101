#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
    }
};




int main() {

    int myArray[] = {10,2,5,3};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {-4,-1,0,3,10;

    Solution obj;
    bool result = obj.checkIfExist(someVector);

}
