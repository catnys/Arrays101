#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {

public:

    int findNumbers(vector<int>& nums) {
        int maxDigitCounts = 0;
        for(int num: nums) {
            cout << "numb: " << num << " has " << calculateDigits(num) << " digits. (" << (calculateDigits(num) % 2 == 0 ? "even" : "odd") << " of digits)" << endl;
            if(calculateDigits(num) % 2 == 0) maxDigitCounts++;
        }
        return maxDigitCounts;        
    }

   int calculateDigits(int num) {
        int count = 0;
        while(num > 0) {
            num/=10;
            count++;

        }
        return count;
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