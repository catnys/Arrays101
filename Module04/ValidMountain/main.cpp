#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
    }
};




int main() {

    int myArray[] = {2,1};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array
    vector<int> someVector(myArray, myArray + size); // Convert array to vector

    Solution obj;
    bool result = obj.validMountainArray(someVector);
    cout << result << endl;

}
