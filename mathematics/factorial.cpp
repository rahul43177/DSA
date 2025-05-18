#include <bits/stdc++.h>
using namespace std;

int findFactorial(int n) {
    if(n == 0 || n == 1) return 1;
    
    int temp = n;
    int fact = 1; 
    for(int i = 0;i<n;i+=1) {
        fact = fact * temp; 
        temp -- ;
    }
    return fact; 
}

int main() {
	int number  = 6;
	int factorial = findFactorial(number) ; 
	cout << factorial ; 
    return 0 ;
}
