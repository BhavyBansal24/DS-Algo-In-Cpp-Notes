#include<iostream>
using namespace std;

class Student {
    public :
        int age;
        const int rollNumber;
        int &x;
        Student(int r , int age) : rollNumber(r), age(age), x(this -> age) {

        }
};

int main() {
    Student s1(209309023, 19);
    //s1.age = 20;
    //s1.rollNumber = 101;
    cout << s1.rollNumber << " " << s1.age << endl;
}