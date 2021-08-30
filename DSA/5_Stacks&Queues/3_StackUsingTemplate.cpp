#include<bits/stdc++.h>
using namespace std;

template<typename T>
class StackUsingArray {
    T *data;
    int nextIndex;
    int capacity;

    public :

    StackUsingArray() {
        data = new T [4];
        nextIndex = 0;
        capacity = 4;
    }

    // returns number of elements in my stack
    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    // insert element in stack , dynamic array(twice space)
    void push(T element) {
        if(nextIndex == capacity) {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }    
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element
    T pop() {
        if(isEmpty()) {
            cout << "Stack empty" << endl;
            return 0;
        }    
        nextIndex--;
        return data[nextIndex];
    }

    // top most element read
    T top() {
        if(isEmpty()) {
            cout << "Stack empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};

int main() {
    StackUsingArray<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;

    cout << s.isEmpty() << endl;

    cout << endl;
    StackUsingArray<char> s1;   // ASCII values
    s1.push(64);
    s1.push(65);
    s1.push(66);
    s1.push(67);
    s1.push(68);

    cout << s1.top() << endl;

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    cout << s1.size() << endl;

    cout << s1.isEmpty() << endl;
}