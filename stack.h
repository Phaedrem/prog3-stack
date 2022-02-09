/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/



#ifndef STACK_STACK_H
#define STACK_STACK_H

#define DEFAULTSIZE 1

class myStack {

    public:
        myStack(int);
        ~myStack();
        bool push(int);
        bool pop();
        bool isEmpty();

    private:
        int top;
        int *stack;

};




#endif //STACK_STACK_H