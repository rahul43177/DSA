#include<iostream>
using namespace std;

int numberSum(int number) {
    if(number == 0 || number == 1) {
        return number;
    }
    int lastDigit = number%10;
    int removedLastDigit = number / 10;
    return lastDigit + numberSum(removedLastDigit);
}
int main() {
    int number =253 ; //3
    int sum = numberSum(number);
    cout << sum;
}