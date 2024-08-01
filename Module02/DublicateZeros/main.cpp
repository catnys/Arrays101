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

    int myArray[] = {12,345,2,6,7896};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {1,1,0,1,1,1};

    Solution obj;
    int result = obj.findNumbers(someVector);
    cout << "Result: " << result << endl;

}