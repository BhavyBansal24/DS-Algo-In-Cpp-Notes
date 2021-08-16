/*
Destructors --
* same name as our class
* no return type
* no input argument

syntax of default destructor--
~student(){               // additional symbol '~' is used to differenciate them from constructors

}
--> like constructor, destructor is also called once in lifespam of object, i.e, at the end when destroying the object.
--> similarly, once we create our own destructor the default destructor is vanished...
*/

#include<iostream>
using namespace std;

class student {
    public :
    string name;
    int age;
    ~student(){
        cout << "destructor is called" << endl;
    }
};

int main(){
    student s1;
    student s2(s1);
    student *s3 = new student(s2);  
    // getting only two times "destructor is called", reason is we need to delete this one explicitely as it was created in heap memory.
    delete s3;
}