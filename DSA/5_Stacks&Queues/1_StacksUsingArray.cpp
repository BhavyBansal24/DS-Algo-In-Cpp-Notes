#include <bits/stdc++.h>
using namespace std;
class StackUsingArray {
    int *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // returns number of elements in my stack
    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    // insert element in stack
    void push(int element) {
        if(nextIndex == capacity) {
            cout << "stack  full" << endl;
            return;
        }    
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element
    int pop() {
        if(isEmpty()) {
            cout << "Stack empty" << endl;
            return INT_MIN;
        }    
        nextIndex--;
        return data[nextIndex];
    }

    // top most element read
    int top() {
        return data[nextIndex - 1];
    }
};


int main() {
    StackUsingArray a(4);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    cout << a.pop() << endl;
    a.push(305);
    cout << a.top() << endl;
    cout << a.size() << endl;
    cout << a.isEmpty() << endl; // 0 = false
}