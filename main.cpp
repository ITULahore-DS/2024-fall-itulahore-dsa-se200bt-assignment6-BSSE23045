#include<iostream>
#include"functions.h"
#include"functions.cpp"
using namespace std;

int main(){
    while(true) {
        int num;
        cout << "------WELCOME TO ASSIGNMENT 6------" << endl;
        cout << "press 1 to push element in stack: " << endl;
        cout << "press 2 to pop element from stack: " << endl;
        cout << "press 3 to clear elements in stack: " << endl;
        cout << "press 4 to enqueue in Queue: " << endl;
        cout << "press 4 to dequeue in Queue: " << endl;
        cout << "press zero to exist menu! " << endl;
        cin >> num;
        if(num == 1) {
            Stack myStack;
            myStack.push(10);
            myStack.push(20);
            myStack.push(30);
            cout << "The elements of the stack is "<< endl;
            myStack.printStack();
        }
        if(num == 2) {
            Stack myStack;
            myStack.push(10);
            myStack.push(20);
            myStack.push(30);
            myStack.pop();
            cout << "element after popping the stack is "<< endl;
            myStack.printStack();
            myStack.pop();
            cout << "element after popping the stack is "<< endl;
            myStack.printStack();
        }
        if(num == 3) {
            Stack myStack;
            myStack.push(10);
            myStack.push(20);
            myStack.push(30);
            myStack.clear();
            cout << "The elements of the stack after clear is "<< endl;
            myStack.printStack();
        }
        if(num == 4) {
            Queue myQueue;
            myQueue.enqueue(10);
            myQueue.enqueue(20);
            myQueue.enqueue(30);
            myQueue.enqueue(40);
            cout << "The elements of the queue after enqueuing is "<< endl;
            myQueue.printQueue();

        }
        if(num == 5) {
            Queue myQueue;
            myQueue.enqueue(10);
            myQueue.enqueue(20);
            myQueue.enqueue(30);
            myQueue.enqueue(40);
            myQueue.enqueue(50);
            cout << "The elements of the queue after enqueuing is "<< endl;
            myQueue.printQueue();
            myQueue.dequeue();
            myQueue.dequeue();
            cout << "element after dequeuing is "<< endl;
            myQueue.printQueue();

        }
        if(num == 0) {
            break;
        }
    }
  return 0;
  }