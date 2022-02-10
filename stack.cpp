/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/

#include "stack.h"

MyStack::MyStack(int size){
    top = -1;
    if(size > DEFAULTSIZE){
        stackSize = size;
        stack = new int[size];
    }else{
        stackSize = DEFAULTSIZE;
        stack = new int[DEFAULTSIZE];
    }
}

MyStack::~MyStack(){
    delete[] stack;
}

bool MyStack::push(int number){
    bool success = false;
    if(top <(stackSize-1)){
        top++;
        stack[top] = number;
        success = true;
    }
    return success;
}

int MyStack::pop(){
    int element = stack[top];
    if(top > -1){
        top--;
    }else{
        throw 0;
    }
    return element;
}

bool MyStack::isEmpty(){
    return top == (-1);
}


int MyStack::peek(){
    if(top > -1){
        int element = stack[top];
        return element;
    }else{
        throw 0;
    }
}    

//DEBUGGING METHOD
void MyStack::readStack(){
    if(!isEmpty()){
        for(int i=0; i<=top; i++){
           std::cout << stack[i] << std::endl;
        }
    }
}