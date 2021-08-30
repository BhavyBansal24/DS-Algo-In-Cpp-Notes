#include<bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    stack<int> s2;
    s1.push(12);
    s1.push(16);
    s1.push(20);
    s2.push(24);
    s2.push(28);
    s2.push(32);
    s2.push(36);
    s2.push(40);

    s1.pop();
    cout << s1.top() << endl;
    cout << s1.empty() << endl;
    cout << s1.size() << endl;
    
    // additional feature
    s1.swap(s2);
    cout <<s2.top() <<endl;
    cout <<s1.top() <<endl;
}