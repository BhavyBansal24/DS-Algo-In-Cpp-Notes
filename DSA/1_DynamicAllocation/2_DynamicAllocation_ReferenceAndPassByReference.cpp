#include<iostream>
using namespace std; 

void increment(int& i) {
    i++;
}

int& f(int n) {
    int a = n;
    return a;
} 

int main() {
    int i = 10;
    int& j = i;
    i++;
    cout << i << endl;
    cout << j << endl;

    int k = 100;
    j = k;
    cout << i << endl;

    i = 10;
    increment(i);
    cout << i<< endl;

    int& k1 = f(i);
    //cout << k1 << endl; , dont run this line else system will crash due to accessing some other memory

}