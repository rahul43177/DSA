#include<iostream>
using namespace std;

void printOneToN(int n) {
    if(n == 0) {
        return;
    }
    
    printOneToN(n-1);
    cout << n << endl;
}



int main() {
    printOneToN(5);
}