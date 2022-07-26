/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/



#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>

#define DEFAULTSIZE 1

class MyStack {

    public:
        MyStack(int);
        ~MyStack();
        bool push(int);
        int pop();
        bool isEmpty();
        void readStack();
        int peek();

    private:
        int stackSize;
        int top;
        int *stack;

};




#endif //STACK_STACK_H