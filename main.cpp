/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/




#include "main.h"

int main(int argc, char** argv){
    myStack myStack1(SIZE);

    if(myStack1.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Stack is not empty" << endl;
    }

    cout << endl;

    for(int i=0; i<=SIZE+10; i++){
        if(myStack1.push(i)){
            cout << "Element Insterted" << endl;
        }else{
            cout << "Overflow Error" << endl;
        }
        
    }

    cout << endl;
    myStack1.readStack();
    cout << endl;

    if(myStack1.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Stack is not empty" << endl;
    }

    cout << endl;

    for(int i=0; i<=SIZE+10; i++){
        try{
            cout << myStack1.pop() << endl;
        } catch(...){
            cout << "Underflow Error" << endl;
        }
    }

    cout << endl;

    if(myStack1.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
}