#include<iostream>
using namespace std;

void printTillOne(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    printTillOne(n-1);
}

int main() {
    printTillOne(5);
    return 0;
}