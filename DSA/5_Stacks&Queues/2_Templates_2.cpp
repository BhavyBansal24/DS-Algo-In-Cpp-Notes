#include<bits/stdc++.h>
using namespace std;

/* making pair class with different x,y of diff type(int,double,char,...) */
template<typename T, typename V>
class Pair {
    T x;
    V y;

    public :
    
    void setX(T x) {
        this->x = x;
    }

    T getX() {
        return x;
    }

    void setY(V y) {
        this->y = y;
    }

    V getY() {
        return y;
    }

};
int main(){
    Pair<int, double> p1;
    p1.setX(31);
    p1.setY(34.23);

    cout << p1.getX() << ' ' << p1.getY() << endl;

    // making triplet from this
    Pair<Pair<int, int>, double> p2;
    p2.setY(23.234);
    Pair<int, int> p3;
    p3.setX(12);
    p3.setY(15);
    p2.setX(p3);
    cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;

    // similarly we can create whatever we want
}