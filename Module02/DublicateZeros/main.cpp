#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(size_t i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                arr.insert(arr.begin() + i + 1, 0);
                // Skip the next element to avoid infinite loop on the newly inserted element
                i++;
            }
        }
    }

    void display(vector<int> arr) {
        cout << "----" << endl;
        for(int i = 0; i < arr.size(); i++) {
            cout << "arr[" << i << "] : " << arr[i] << endl;
        }
    }
};


int main() {

    int myArray[] = {1,0,2,3,0,4,5,0};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {1,0,2,3,0,4,5,0};
    cout << someVector.size() << endl;

    Solution obj;
    obj.duplicateZeros(someVector);
}