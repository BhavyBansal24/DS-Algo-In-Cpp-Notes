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

Node* takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail = newNode;
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

Node* removeNode(Node *head, int i) {
    Node *temp = head;
    int j = 1;
    if(i==0) {
        head = head->next;
    }
    while(temp != NULL && j < i){
        temp = temp->next;
        j++;
    }
    if(temp!= NULL){
        temp->next = temp->next->next;
    }
    return head;
}

int main() {
    Node *head = takeInput();
    int i;
    cin >> i;
    head = removeNode(head, i);
    print(head);
}