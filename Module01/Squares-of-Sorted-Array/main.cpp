#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int sortedSquares(vector<int>& nums) {
        display(nums);

        for(int i = 0; i < nums.size(); i++) {
            nums[i] *= nums[i];
        }
        display(nums);
        bubbleSort(nums);
        display(nums);
        return 0;
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


    std::vector<int> someVector(myArray, myArray + size); // Convert array to vector
    // vector<int> someVector  = {-4,-1,0,3,10;

    Solution obj;
    int result = obj.sortedSquares(someVector);
    cout << "Result: " << result << endl;

}