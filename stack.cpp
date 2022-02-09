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

int myStack::pop(){
    if(top > -1){
        int element = stack[top];
        top--;
        return element;
    }else{
        throw 0;
    }
}

bool myStack::isEmpty(){
    return top == (-1) ? true : false;
}


//DEBUGGING METHOD
void myStack::readStack(){
    if(!isEmpty()){
        for(int i=0; i<=top; i++){
           std::cout << stack[i] << std::endl;
        }
    }
}