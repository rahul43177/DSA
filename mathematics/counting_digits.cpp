#include <iostream>
using namespace std;

int countDigits(int n) {
    if(n < 10) {
        return 1;
    }
    
    int count = 0;
    while(n > 0) {
        count++;
        n = n/10;
    }
    return count ;
}

int main() {
    int number;
    cout << "Please enter the number \n";
    cin >> number ; 
    
    int digits = countDigits(number);
    cout << "The number of digits in the " << number << " are " << digits << endl;
    return 0;
}