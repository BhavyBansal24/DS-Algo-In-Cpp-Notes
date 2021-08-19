#include<iostream>
using namespace std; 

int main() {
    int* p = new int;
    *p = 10;
    cout << *p << endl;
    //similarly
    double* pd = new double;
    char* c = new char;

    int* pa = new int[50];
    int n;
    cin >> n;
    int* pa2 = new int[n];
    pa2[0] = 10;  // pa2[0] = *(pa2 + 0)
    pa2[2] = 3;
    //using loops we can easily print pa2 array now

    for(int a = 0; a<n ;a++) {
        cout << pa2[a] <<endl;
    }

    delete p;
    p = new int;
    delete p;
    p = new int[100];
    delete [] p;
}