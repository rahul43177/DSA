#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> arr) {
    int largest = 0;
    for(int i = 0;i<arr.size();i++) {
        if(arr[i] > arr[largest]) {
            largest = i;
        }
    }
    return arr[largest];
}

int main() {
    vector<int> arr = {12, 15, 2, 19, 5 ,21}; //largest -> 19

    int largest = largestElement(arr);
    cout << "The largest element in the array is -> " << largest << endl;
    return 0;
}