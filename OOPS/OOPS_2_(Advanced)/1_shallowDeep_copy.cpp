#include <bits/stdc++.h>
using namespace std;

class Student {
    int age;
    char *name;

    public :

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

    void display() {
        cout << name << " " << age << endl;
    }
};


int main() {
    char name[] = "bhavy";
    Student s1(20, name);
    s1.display();

    name[4] = 'i';
    Student s2(24,name);
    s2.display();

    s1.display();
}

// in output u can observe the name of s1 get changed
// Lets see what must have happened in code--
// 30th line ke char mai ye 6 values aayi hogi (b,h,a,v,y,null), kisi random address ke saath, us address par name point kar raha hoga
// then we create s1, lets see in class file then, we passed (20,name) in function and there name is received as (address), i.e, age=20 and name = address;
// agli line mai jab "this" call hua tab age mai 20 store hua and name mai address store hua,
//jis karan ab s1 ka (only name) purana address ko hi point kar raha jo pahele name banate samai random address mila tha
// then we changed our created name only with y -> i
// ab jo naya s2 block bana uska age to 24 hua par name mai fir se vahi address aa gaya
// and now when we use display since original got changed we get bhavi as correct output;
// but after that when we call s1 again, since changes are in original only vapis se bhavi hi name ka output mil gaya jabki age ko farak nahi padha kyoki sif name point kar raha tha

//// in short what happend is we are pointing both s1 and s2 on our originally created array, so name mai kitne bhi changes karlo vo dono (s1,s2) ke liye changes ho jainge
////this type of copying is termed as shallow copy////
// idealy what we need to do is to make a deep copy , so that 2 arrays are there seperately with different addresses (lets see how)
// refer to class file for shallow and deep copy creation difference