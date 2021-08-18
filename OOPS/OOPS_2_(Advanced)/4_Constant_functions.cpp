#include<iostream>
using namespace std;

class Fraction {
    private :
        int Numerator;
        int Denominator;

    public :

    Fraction() {                           // default constructor

    }

    Fraction(int N, int D) {
        Numerator = N;
        Denominator = D;
    }

    int getNumerator() const {
        return Numerator;
    }

    int getDenominator() const {
        return Denominator;
    }

    void setNumerator(int N) {
        Numerator = N;
    }

    void setDenominator(int D) {
        Denominator = D;
    }

};

int main() {
    const Fraction f3;
    cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
    // f3.setNumerator(12);
}