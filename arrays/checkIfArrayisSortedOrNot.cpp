#include<iostream>
#include<vector>
using namespace std;

bool ifSorted(vector<int> arr) {
    if(arr.size() == 0) return true;

    for(int i = 1;i<arr.size();i++) {
        if(arr[i-1] > arr[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {10,20,30,40,50,60}; //sorted 
    vector<int> arr2 = {11,2,33,14,150,6}; //not sorted

    bool sorted = ifSorted(arr);

    if(sorted) cout << "The array is sorted" << endl;
    else cout << "The array is not sorted" << endl;
}