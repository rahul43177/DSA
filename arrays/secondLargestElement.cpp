#include<iostream>
#include<vector>
using namespace std;

int findSecondLargest(vector<int> arr ) {
    if(arr.size() == 0) return 0;
    int largest = 0;
    int secondLargest = -1;
    for(int i = 1;i<arr.size();i++) {
        if(arr[i] > arr[largest]) {
            secondLargest = largest;
            largest = i;
        } else if(arr[i] != arr[largest]) {
            if(secondLargest == -1 || arr[i] > arr[secondLargest]) {
                secondLargest = i;
            }
        }
    }
    return arr[secondLargest];
}

int main() {
    vector<int> arr = {10,20,30,40,51}; //second largest -> 40;

    int second = findSecondLargest(arr);
    cout << "The second largest element of the array -> " << second << endl;
    return 0;
}