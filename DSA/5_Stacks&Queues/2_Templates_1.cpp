#include<bits/stdc++.h>
using namespace std;

/* making pair class with both x,y of same type(int,double,char,...) */

// temp data type named as T using template
template <typename T>

// making class with T(temp) datatype
class Pair {
    T x;
    T y;
    public :
    
    void setX(T x) {
        this->x = x;
    }

    T getX() {
        return x;
    }

    void setY(T y) {
        this->y = y;
    }

    T getY() {
        return y;
    }
};

// now we can use x,y as whatever we want int,doubles,char....
int main(){
    /* int */
    Pair<int> p1;
    p1.setX(21);
    p1.setY(22);

    cout << p1.getX() << " " << p1.getY() << endl;

    /* double */
    Pair<double> p2;
    p2.setX(21.243);
    p2.setY(22.332);

    cout << p2.getX() << " " << p2.getY() << endl;

    /* string */
    Pair<string> p3;
    p3.setX("Bhavy");
    p3.setY("Bansal");

    cout << p3.getX() << " " << p3.getY() << endl;
}