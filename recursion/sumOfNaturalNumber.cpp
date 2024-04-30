#include<iostream>
using namespace std;

int findNaturalNumber(int n) {
    if(n ==0) {
        return 0;
    }
    return n+findNaturalNumber(n-1);
}

int main() {
    int n = 5;
    
    int sum = findNaturalNumber(n);
    cout << sum;
}