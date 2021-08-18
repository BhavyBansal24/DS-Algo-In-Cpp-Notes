#include <bits/stdc++.h>
using namespace std;

class Student {
    int age;

    public :
    char *name;
    Student(int age, char *name) {
        this-> age = age;
        //shallow copy
        //this-> name = name;

        // Deep copy
        this->name = new char[strlen(name) + 1];
        // +1 for null & strlen for string length character
        strcpy(this->name, name);
        // strcpy to copy string and create new name

    }

    //Designing Copy Constructor
    Student(Student const &s) {
        this->age = s.age;
        //this->name = s.name;    //shallow copy
        //deep copy
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }          

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    Student s2(s1); // we created an copy of s1 as s2, with same values in s1

    s2.name[0] = 'x';
    s1.display();  // in output s1 also get changed on changing in s2.name
    s2.display();
}

/*
what happened internally is--
on calling char name[] = 'abcd
;, a new array with a,b,c,d,null is created, with name storing the address of this array.
now when we create s1, we get values stored in name as age = 20 and name, a deep copy is created , i.e, new array with same value of name and other address is created and now this new address is stored in s1-name,, i.e, s1-name is now storing the address of newly generated name (by deep copy)
now when we use Copy constructor, in copy s2 get value of s1 and here we get address in name of that deep copy array as it is only stored in s1
hence now if we make changes in s2-name it will reflect in s1 as well, cause changes were made in deep copy itself.
The thing to note is the inbuilt copy construtor makes the shallow copy of s1, ie, directly copying the values, no new array of name is created
one among to solution to this is designing own copy constructor
NOTE : DO REFER TO PDF NOTES to know about "Student(Student const &s)"
*/