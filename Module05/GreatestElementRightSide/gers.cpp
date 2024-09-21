#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
    }
};




int main() {

    int myArray[] = {17,18,5,4,6,1};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    vector<int> someVector(myArray, myArray + size); // Convert array to vector

    Solution obj;
    vector<int> result = obj.replaceElements(someVector);

}
