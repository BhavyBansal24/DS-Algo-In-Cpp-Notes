#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next = NULL;
    }

};

Node* takeInput() {           // complexity O(n^2)
    int data;
    cin >> data;
    Node *head = NULL;
    
    while(data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp -> next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}



void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp ->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    print(takeInput());
}