//non optimized
// #include<iostream>
// using namespace std;

// int findFactorial(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     }
//     return n*findFactorial(n-1);
// }

// int main() {
//     int n = 3;
//     int factorial = findFactorial(n);
//     cout << "the facorial is " << factorial;
// }


//optimized -> tail recursive
// #include<iostream>
// using namespace std;

// int findFactorial(int n , int k ) {
//     if(n == 0 || n == 1) {
//         return k;
//     }
//     return findFactorial(n-1 , n*k);
// }

// int main() {
//     int n = 3;
//     int factorial = findFactorial(n , 1);
//     cout << "the facorial is " << factorial;
// }
