#include<iostream>
#include<queue>
using namespace std;

int main(){


    // make the doubly ended queus

    deque<int> d;
    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();


    if(d.empty()){
       cout << "queues is empty" << endl;
    }
    else {
        cout << "queues is not empty" << endl;
    }



    /*
    // create a queues
    queue<int> q;

    q.push(11);
    cout << "front of q is: " << q.front()  << endl;

    q.push(15);

    cout << "front of q is: " << q.front() << endl;

    q.push(13);
    cout << "front of q is: " << q.front()  << endl;

    cout << "size of queue is: "  << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "size of queue is "  << q.size() << endl;

    if(q.empty()){
        cout << "Queues is empty " << endl;
    }
    else {
        cout << "Queues is not empty " << endl;
    }
        */
}