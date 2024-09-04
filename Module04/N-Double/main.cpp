#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;  // A set to keep track of seen elements
        for (int x : arr) {
            if (seen.count(2 * x) || (x % 2 == 0 && seen.count(x / 2))) {
                return true;
            }
            seen.insert(x);
        }
        return false;
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
