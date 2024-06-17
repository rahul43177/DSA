#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> arr) {
    cout << "Entering in the function" << endl;
    int left = 0;
    int right = arr.size() - 1;
    int temp = 0;

    while(left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for(int i = 0;i<arr.size();i++) {
        cout << arr[i] << " " ;
    }
    
}

int main() {
    vector<int> arr = {10,20,30}; //-> {30,20,10};
    reverseArray(arr);
}