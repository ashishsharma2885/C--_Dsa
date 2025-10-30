#include<iostream>
using namespace std;

class kQueue {
public: 
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    kQueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for(int i = 0; i < k; i++){
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for(int i = 0; i < n - 1; i++){
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        arr = new int[n];
        freeSpot = 0;
    }

    void enqueue(int data, int qn){
        // Overflow check
        if(freeSpot == -1){
            cout << "No empty space is present" << endl;
            return;
        }

        // Find first free index
        int index = freeSpot;

        // Update freeSpot
        freeSpot = next[index];

        // If first element
        if(front[qn - 1] == -1){
            front[qn - 1] = index;
        } else {
            next[rear[qn - 1]] = index;
        }

        // Update next and rear
        next[index] = -1;
        rear[qn - 1] = index;

        // Push element
        arr[index] = data;    
    }

    int dequeue(int qn){
        // Underflow check
        if(front[qn - 1] == -1){
            cout << "Queue underflow" << endl;
            return -1;
        }

        // Find index to pop
        int index = front[qn - 1];

        // Move front ahead
        front[qn - 1] = next[index];

        // Manage free spots
        next[index] = freeSpot;
        freeSpot = index;

        // Return the popped element
        return arr[index];
    }
};

int main(){
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl; // 10
    cout << q.dequeue(2) << endl; // 20
    cout << q.dequeue(1) << endl; // 15
    cout << q.dequeue(1) << endl; // 25

      cout << q.dequeue(1) << endl;

    return 0;
}
