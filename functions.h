#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
public:
    Node(int d) {
        data = d;
        next = nullptr;
    }
    ~Node() {
        delete next;
    }
    void setData(int d) {
        data = d;
    }
    int getData() {
        return data;
    }
    Node* getNext() {
        return next;
    }
    void setNext(Node* n) {
        next = n;
    }

};

class Stack {
    Node* top;
    int count;
public:
    Stack();
    ~Stack();
    void push(int d);
    void pop();
    bool isEmpty();
    void printStack();
    int size();
    int peek();
    void clear();
};

class Queue {
    Node* top;
    int count;
public:
    Queue();
    ~Queue();
    void enqueue(int d);
    void dequeue();
    bool isEmpty();
    void printQueue();
    int size();
    int peek();
};

#endif //FUNCTIONS_H
