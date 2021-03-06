#include <bits/stdc++.h>
using namespace std;

class Fraction {
    public :
    int numerator;
    int denominator;

    Fraction (int numerator,int denominator) {
        this ->numerator = numerator;
        this ->denominator = denominator;
    }

    void print() const {
        cout << this->numerator << "/" << denominator << endl;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j;i++) {
            if(this -> numerator % i ==0 && this ->denominator % i ==0) {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }

    Fraction operator+(Fraction const &f2) const {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        //numerator = num;
        //denominator = lcm;
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }

    Fraction operator*(Fraction const &f2) const {
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        Fraction fNew(n, d);
        fNew.simplify();
        return fNew;
    }

    bool operator==(Fraction const &f2) const {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }

    Fraction& operator++() {
        numerator = numerator + denominator;
        simplify();

        return *this;
    }

    Fraction operator++(int) {
        Fraction fNew(numerator, denominator);
        numerator = numerator + denominator;
        fNew.simplify();
        simplify();
        return fNew;
    }

    Fraction& operator+=(Fraction const &f2) {  // 'Fraction&' to get rid of 'buffer' while nesting
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        numerator = num;
        denominator = lcm;
        simplify();
        return *this;   // returning so that we can use nesting, else using void will also works
    }


};

int main() {
    Fraction f1(10, 3);
    Fraction f2 = (f1++);
    f1.print();
    f2.print();
    //Fraction f3 = f1 += f2;
    (f1 += f2) += f2;  // 23/3 + 10/3 = 33/3 = 11/1
    f1.print();
}