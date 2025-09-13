#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val <<endl;
    }
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at Head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
}

// Insert Tail
void insertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insert at Position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position == 1){
        insertAtHead(head, d);
        if(tail == NULL) tail = head;
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }

    // insert at last
    if(temp->next == NULL){
        insertTail(tail, d);
        return;
    }

    // insert in middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


void delationNode(int position, Node* &head){
    // deleting the first or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else {
        // deleting my middle node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);

    insertTail(tail, 25);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

     insertAtPosition(tail, head, 2, 102);
    print(head);

    delationNode(3, head);
    print(head);


    return 0;
}
