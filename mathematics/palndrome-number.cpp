#include <bits/stdc++.h>
using namespace std;

bool findPalindrome(int n) {
    int temp = n ; 
    int rev = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        rev = rev*10 + lastDigit;
        n = n/10;
    }
    
    if(rev == temp) {
        return true ;
    } else return false;
}

int main() {
	int number = 1221;
	bool isPal = findPalindrome(number);
	if(isPal) cout << "The number is palindrome" << endl;
	else cout << "The number is not palindrome" << endl;

	return 0;
}
