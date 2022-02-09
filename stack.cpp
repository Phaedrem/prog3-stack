/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/

#include "stack.h"

myStack::myStack(int size){
    top = -1;
    if(size > DEFAULTSIZE){
        stackSize = size;
        stack = new int[size];
    }else{
        stackSize = DEFAULTSIZE;
        stack = new int[DEFAULTSIZE];
    }
}

myStack::~myStack(){
    delete[] stack;
}

bool myStack::push(int number){
    bool success = false;
    if(top <(stackSize-1)){
        top++;
        stack[top] = number;
        success = true;
    }
    return success;
}

bool myStack::pop(){
    return true;
}

bool myStack::isEmpty(){
    bool empty = false;
    if(top == -1){
        empty = true;
    }
    return empty;
}


//DEBUGGING METHOD
void myStack::readStack(){
    if(!isEmpty()){
        for(int i=0; i<=top; i++){
           std::cout << stack[i] << std::endl;
        }
    }
}