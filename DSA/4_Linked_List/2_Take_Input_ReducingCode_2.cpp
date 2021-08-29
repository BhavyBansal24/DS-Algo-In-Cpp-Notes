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

Node* takeInput_Better() {                // complexity O(n)
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
            /*
            Node *temp = head;
            while(temp -> next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            */
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

int main() {
    cout << "Enter all Input space seperated with -1 as last input to terminate input : ";
    print(takeInput_Better());
}