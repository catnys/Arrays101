#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        int i = 0;

        // Walk up
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // Peak can't be the first or last element
        if (i == 0 || i == n - 1) {
            return false;
        }

        // Walk down
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        return i == n - 1;
    }
};

int main() {
    int myArray[] = {0, 2, 3, 4, 5, 2, 1, 0};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array
    vector<int> someVector(myArray, myArray + size); // Convert array to vector

    Solution obj;
    bool result = obj.validMountainArray(someVector);
    cout << (result ? "True" : "False") << endl;

    return 0;
}
