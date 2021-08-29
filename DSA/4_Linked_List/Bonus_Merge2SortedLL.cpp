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

Node* sorting(Node *head1,Node *head2) {
    Node *head = NULL;
    Node *tail = NULL;
    if(head1->data <= head2->data) {
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else{
        head = head2;
        tail = head2;
        head2 = head2->next;
    }
    while(head1 != NULL || head2 != NULL) { // error here resulting segment fault.....
        if(head1->data <= head2->data) {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            tail = head2;
            head2 =head2->next;
        }
    }
    return head;
}
///// method 2 (using recursion)
    Node* SortedMerge(Node* a, Node* b) {
    Node* result = NULL;
     
    /* Base cases */
    if (a == NULL)
        return(b);
    else if (b == NULL)
        return(a);
     
    /* Pick either a or b, and recur */
    if (a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return(result);
}

int main(){
    Node *head1 = takeInput();
    Node *head2 = takeInput();
    head1 = sorting(head1, head2);
    print(head1);
}