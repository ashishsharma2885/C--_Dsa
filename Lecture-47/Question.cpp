#include<iostream>
#include<map>
using namespace std;

class Node {
 public: 
 int data;
 Node* next;

 // constructor
 Node(int d){
    this->data = d;
    this->next = NULL;
 }
 ~Node(){
    int value = this->data;
    if(this->next != NULL){
        delete next;
        next = NULL;
    }
     cout << "memory free for node with data " << value <<endl;
 }
};

void insertNode(Node* &tail, int element, int d){
    // empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
   else {
    // non-empty 
    Node* curr = tail;
    while(curr->data != element){
        curr = curr -> next;
    }
    // element found: curr is element node
    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;
   }
}

void print(Node* tail){
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = tail;
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}

// deletion node
void deletionNode(Node* &tail, int value){
    if(tail == NULL){
        cout << "List is empty, please check again" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;

        if(tail == curr){
            if(curr == prev){ // only one node case
                tail = NULL;
            }
            else {
                tail = prev;
            }
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool detectLoop(Node* head){
    if(head == NULL) return false;

    map<Node*, bool> visited;
    Node* temp = head;
    while (temp != NULL) {
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

Node* floydDectectLoop(Node* head){
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout << "present at " << slow -> data << endl;
            return slow; 
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL)
    return NULL;

    Node* intersection = floydDectectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3); // first node
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deletionNode(tail, 6);
    print(tail);

    Node* head = NULL;
    if(tail != NULL) head = tail->next;  // in circular LL, head is tail->next

    if(floydDectectLoop(head) != NULL){
        cout << "Cycle is present " << endl;
    }
    else {
        cout << "No cycle" << endl;
    }

    Node* loop = getStartingNode(head);

   cout << "Loop starts at "  << loop -> data << endl;
}
