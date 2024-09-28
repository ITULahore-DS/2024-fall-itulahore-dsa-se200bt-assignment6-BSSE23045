#include "functions.h"

Stack::Stack() {
    count = 0;
    top=nullptr;
}

Stack::~Stack() {

}

void Stack::push(int val) {
    Node *n1=new Node(val);
    if(isEmpty()) {
        top=n1;
    }
    else {
        n1->setNext(top);
        top=n1;
    }
    count++;
}

void Stack::pop() {

    if(isEmpty()) {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else {
        top=top->getNext();
        count--;
    }
}

bool Stack::isEmpty() {
   if(top==nullptr) {
       return true;
   }
    else {
        return false;
    }
}

void Stack::clear() {
  while(!isEmpty()) {
    pop();
  }
}

int Stack::peek() {
  if(isEmpty()) {
    return -1;
  }
    return top->getData();
}

int Stack::size() {
    return count;
}

void Stack::printStack() {
//  cout << " count" << count << endl;
    Node *temp=top;
    for (int i=0;i<count;i++) {
        cout<<temp->getData()<<" " << endl;
        temp=temp->getNext();
    }
}

Queue::Queue() {
    top=nullptr;
    count=0;

}

Queue::~Queue() {

}

bool Queue::isEmpty() {
    if(top==nullptr) {
        return true;
    }
    else {
        return false;
    }
}

void Queue::enqueue(int d) {
    Node *temp=new Node(d);
    Node *temp1=top;
    int size=0;
    if(isEmpty()) {
        top=temp;
    }
    else {
        while(size<count ) {
            temp1=temp1->getNext();
            size++;
        }
        temp1->setNext(temp);
        count++;
    }

}

void Queue::dequeue() {
    if(isEmpty()) {
        return;
    }
    else {
        top=top->getNext();
        count--;
    }
}

int Queue::size() {
    if(isEmpty()) {
        return 0;
    }
    else {
        return count+1;
    }
}

int Queue::peek() {
    if(isEmpty()) {
        return -1;
    }
    return top->getData();
}


void Queue::printQueue() {
    Node *temp=top;
    for (int i=0;i<=count;i++) {
        cout<<temp->getData()<<endl;
        temp=temp->getNext();
    }

}

