#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Insert at head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;  
}

// Print list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at position
void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Delete node at position
void deleteNode(int position, Node* &head, Node* &tail) {
    // delete first or start node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL; // unlink
        delete temp;
    }
    else {
        // deleting middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position) {   // FIXED loop
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // if deleting last node, update tail
        if (curr->next == NULL) {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL; // unlink
        delete curr;
    }
}

// Main function
int main() {
    // Creation of a new node
    Node* node1 = new Node(10);

    // Head and tail pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    // Insert at tail
    insertAtTail(tail, 12);
    print(head);

    // Insert at head
    insertAtHead(head, 15);
    print(head);

    // Insert at position
    insertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    // Delete first node
    deleteNode(1, head, tail);
    print(head);

    // Delete last node
    deleteNode(3, head, tail);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
