#include<bits/stdc++.h>
using namespace std;

class student {
    public :
    int rollNumber;
    int age;

    static int totalStudents;  // now this is property of class not of an object (s1,s2,....)

    student() {
        totalStudents++;
    }

    int getTotalStudent() {
        
    }
};

int student ::totalStudents = 0;

int main() {
    student s1,s2;
    s1.age = 12;
    s2.age = 17;
    cout << student :: totalStudents << endl;
    cout << s1.totalStudents << endl;
}