#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    
    // Function to sort the squares of elements in ascending order
    vector<int> sortedSquares(std::vector<int>& nums) {
        vector<int> squared(nums.size());
    
        // Square each element and store in the new vector
        for(int i = 0; i < nums.size(); i++) {
            squared[i] = nums[i] * nums[i];
        }

        // Sort the squared array using bubble sort (for demonstration)
        bubbleSort(squared);

        return squared;
    }

    void bubbleSort(vector<int>& nums){
        cout << nums.size() << endl;
        for(int i = 0; i < nums.size(); i++) 
            for(int j = 0; j < nums.size()-1; j++) {
                if(nums[j] > nums[j+1])
                    swap(&nums[j],&nums[j+1]);
            }
    }


    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void display(vector<int> nums){
        for(int num: nums) {
            cout << "num: " << num << endl;
        }
    }


};


int main() {

    int myArray[] = {-4,-1,0,3,10};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {-4,-1,0,3,10;

    Solution obj;
    vector<int> result = obj.sortedSquares(someVector);

}