/*
this : it is a keyword use to holds the address of current object i.e, on calling student s1;
this will stores the address of s1.
""As 'this' holds the memory address we can say that 'this' is a pointer""
lets see--
*/

#include <iostream>
using namespace std;

class Student {
    public :
    int age;
    Student(int x){
        cout << "this : "<< this << endl;
        age = age;  // wrong way
        /*
        now, when we call age = age, what is meant too is : 'this' which holds address of s1(object), do change in that age (i.e, make a change in age of s1 and make it equals to age)
        ultimately(and as we know 'this' is a point as it stores memory address), the better way to write age = age so there is no confusion is to write it like "this -> age = age" i.e, age refering to that particular objects pointer has got changed
        */
        this->age = age; // right way
    }
};

int main(){
    Student s1(24);
    cout << "address of s1 : " << &s1 << endl;
}