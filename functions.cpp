#include "functions.h"

Stack::Stack() {
    count = 0;
    top=nullptr;             //initially top is null
}

Stack::~Stack() {

}

void Stack::push(int val) {
    Node *n1=new Node(val);
    if(isEmpty()) {
        top=n1;
    }
    else {
        n1->setNext(top);        //push element at first index
        top=n1;
    }
    count++;                     //increase total size
}

void Stack::pop() {

    if(isEmpty()) {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else {
        top=top->getNext();              //remove first element and update top
        count--;                         //decrase size
    }
}

bool Stack::isEmpty() {
   if(top==nullptr) {
       return true;
   }
    else {
        return false;           //check weather the stack is empty
    }
}

void Stack::clear() {
  while(!isEmpty()) {
    pop();                           //clear whole stack
  }
}

int Stack::peek() {
  if(isEmpty()) {
    return -1;
  }
    return top->getData();           //grt first element of stack
}

int Stack::size() {
    return count;        //get total size of stack
}

void Stack::printStack() {
//  cout << " count" << count << endl;
    Node *temp=top;
    for (int i=0;i<count;i++) {
        cout<<temp->getData()<<" " << endl;
        temp=temp->getNext();                      //print elements of stack till last index
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
        return false;            //check weather the queue is empty
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
            temp1=temp1->getNext();      //push element i queue
            size++;
        }
        temp1->setNext(temp);
        count++;                        // increse size
    }

}

void Queue::dequeue() {
    if(isEmpty()) {
        return;
    }
    else {
        top=top->getNext();           //remove first element
        count--;                     //decrese size
    }
}

int Queue::size() {
    if(isEmpty()) {
        return 0;
    }
    else {
        return count+1;         //get size of queue
    }
}

int Queue::peek() {
    if(isEmpty()) {
        return -1;
    }
    return top->getData();            //get first element of queue
}


void Queue::printQueue() {
    Node *temp=top;
    for (int i=0;i<=count;i++) {
        cout<<temp->getData()<<endl;            //print each element of queue
        temp=temp->getNext();
    }

}

