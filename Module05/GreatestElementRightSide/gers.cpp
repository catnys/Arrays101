#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& vect) {
        int n = vect.size();
        int max_from_right = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current = vect[i];
            vect[i] = max_from_right;
            if (current > max_from_right) {
                max_from_right = current;
            }
        }

        return vect;
    }

    void swap(int*a , int*b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};




int main() {

    int myvectay[] = {17,18,5,4,6,1};
    int size = sizeof(myvectay) / sizeof(myvectay[0]); // Calculate the size of the vectay


    vector<int> someVector(myvectay, myvectay + size); // Convert vectay to vector
    cout << size << endl;

    Solution obj;
    vector<int> result = obj.replaceElements(someVector);

    int a = 10;
    int b = 5;
    cout << "---------\n" << endl;
    /*
    cout << "a: " << a << " b: " << b << endl;

    obj.swap(&a,&b);
    cout << "a: " << a << " b: " << b << endl;
    */

}
