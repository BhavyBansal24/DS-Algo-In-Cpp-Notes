
// Least important topic (global variables are of no use)

// Use of #define

#include<iostream>
using namespace std;
#define PI 3.14
int r; // r here is a global variable
int main() {
    cin >> r;
    double area = PI * r * r;
    cout << area << endl;
}