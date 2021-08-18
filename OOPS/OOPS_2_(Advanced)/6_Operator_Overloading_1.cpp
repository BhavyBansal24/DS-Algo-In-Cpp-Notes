#include<bits/stdc++.h>
using namespace std;

class Fraction {
    public :
    int num;
    int deno;

    Fraction(int n,int d) {
        num = n;
        deno = d;
    }

    Fraction operator+(Fraction const &f2) {
        int x = num + f2.num;
        int y = deno + f2.deno;
        Fraction newF(x,y);
        return newF;
    }
    
    void print() {
        cout << this->num << "/" << deno << endl;
    }

};

int main() {
    Fraction f1(3, 4);
    Fraction f2(7, 4);
    Fraction f3 = f1 + f2;
    f3.print();
}