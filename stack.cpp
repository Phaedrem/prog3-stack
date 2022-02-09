/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/

#include "stack.h"

myStack::myStack(int size){
    top = -1;
    if(size > DEFAULTSIZE){
        stack = new int[size];
    }else{
        stack = new int[DEFAULTSIZE];
    }
}

myStack::~myStack(){
    delete[] stack;
}

bool myStack::push(int number){
    return true;
}

bool myStack::pop(){
    return true;
}

bool myStack::isEmpty(){
    return true;
}