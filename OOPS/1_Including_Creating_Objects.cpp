#include <iostream>
using namespace std;
#include "0_Creating_Objects.cpp"

int main(){
    // allocation of students
    student s1;
    s1.name = "bhavy" ;
    cout << s1.name << endl;
    //s1.registrationNo = 209309023;   
    
    //// gives out error as RegistrationNo is private and bydefault aslo everything is private it is must to make them public if we want to use a object in other parts except of class ////
    
    // dynamic allocation
    student * s2 = new student;
    (*s2).name = "vansh";
    s2->RollNo = 52;                  //  s2-> RollNo == (*s2).RollNo
    cout << (*s2).name << endl;
    cout << (*s2).RollNo << endl;
}