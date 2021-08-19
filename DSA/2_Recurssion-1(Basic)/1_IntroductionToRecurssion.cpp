#include<iostream>
using namespace std; 

/*
 int factorial(int n) {
    cout << n << endl;
    int smallOutput = factorial(n-1);
    return n + smallOutput;
}

int main() {
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}
*/

// calculating factorial using recurssion method
int factorial(int n) {
    if (n == 0)
    return 1;
    //cout << n << endl;
    int SmallOutput = factorial(n-1);
    return n * SmallOutput;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}