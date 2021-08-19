#include <iostream> 
using namespace std; 
  
int main() 
{
    //CODE    (Introduction to pointers)
    int i;
    cout << &i << endl;

    int * p = &i;
    cout << p << endl;
    cout << endl;
    
    cout << *p << endl;
    cout << i  << endl;
    cout <<endl;

    // playing with garbage value (Dangerous)

   // int* q ;
   // cout << q << endl;
   // cout << *q << endl;
   // (*q)++;
   // cout << *q << endl; 

    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    //CODE      (Pointer Arthematic)
    cout << p << endl;
    p++;
    cout << p << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    //CODE      (Arrays & Pointers)
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;
    cout << endl;

    a[0]=5;
    a[1]= 10;
    cout << a[0] << endl;
    cout << *a << endl;
    cout << *(a+1) << endl;
    cout << endl;

    cout << 1[a] << endl;
    cout << 0[a] << endl;
    cout << endl;
    
    // differences in array and pointers
    // 2
    cout << p << endl;
    cout << &p << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << endl;
    
    // 3
    int* R = &a[0];
    cout << a << endl;
    cout << R << endl;
    cout << &R << endl;
    cout << &a << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //CODE      (Characters and Pointers)
    int A[] = {1,2,3};
    char b[] = "abc";
    cout << A << endl;  // prints out address
    cout << b << endl;  // prints out actual content

    char* c = &b[0];
    cout << c << endl;  // prints out actual content

    char c1 = 'a';
    char* pc = &c1;
    cout << c1 << endl;
    cout << pc << endl; // output must be only 'a', after 'a' whatever prints is a garbage
    cout << endl;

    return 0; 
} 