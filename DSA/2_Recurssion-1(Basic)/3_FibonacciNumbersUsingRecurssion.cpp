#include <iostream>
using namespace std;

/*
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    int SmallOutput1 = fib(n-1);
    int SmallOutput2 = fib(n-2);
    return SmallOutput1 + SmallOutput2;
}

int main() {
    cout << fib(3) << endl;
}
*/ // ABOVE CODE RESULT IN SEGMENTATION FAULT

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    int SmallOutput1 = fib(n-1);
    int SmallOutput2 = fib(n-2);
    return SmallOutput1 + SmallOutput2;
}

int main() {
    cout << fib(6) << endl;
}