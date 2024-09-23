#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include <memory>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // dummy
        vector<int> vect = arr;

        
        for(int i = 0; i < arr.size(); i++){
            cout << "iteration " << i << " )"<< endl;

            int max;
            for(int j = i+1; j < arr.size(); j++) {
                if( arr[j] > arr[i]){
                    arr[i] = arr[j];
                    max = arr[j];
                }
                    
            }
            cout << "max: " << max << endl;
            cout << "..." << endl; 
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

    int myArray[] = {17,18,5,4,6,1};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array


    vector<int> someVector(myArray, myArray + size); // Convert array to vector
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
