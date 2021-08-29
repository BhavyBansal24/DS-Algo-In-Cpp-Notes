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

void print(Node *head) {
    Node *temp = head;                         // so as not to loose origin head
    while(temp != NULL) {
        cout << temp ->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    //Statically Allocation
    Node n1(2);
    Node *head_static = &n1;
    
    Node n2(5);
    Node n3(7);
    Node n4(9);
    Node n5(124);
    // Connecting all nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    //Dynamically Allocation
    Node *n6 = new Node(5);
    Node *head_dynamic = n6;

    Node *n7 = new Node(8);
    Node *n8 = new Node(19);
    Node *n9 = new Node(98);
    Node *n10 = new Node(9292);
    // Connecting all nodes
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;

    print(head_static);
    print(head_dynamic);
}