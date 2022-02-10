/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/




#include "main.h"

int main(int argc, char** argv){
    srand(time(NULL));
    MyStack myStack1(SIZE);

    if(myStack1.isEmpty()){
        cout << "Stack is empty" << endl;
    } else{
        cout << "Stack is not empty" << endl;
    }

    cout << endl;

    for(int i=0; i<=SIZE+10; i++){
        if(myStack1.push(i)){
            cout << "Element Insterted" << endl;
            cout << myStack1.peek() << endl;
        }else{
            cout << "Overflow Error" << endl;
            cout << myStack1.peek() << endl;
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

    cout << endl;

    for(int i=0; i<=SIZE+10; i++){
        if(myStack1.push(i)){
            cout << "Element Insterted" << endl;
        }else{
            cout << "Overflow Error" << endl;
        }
    }

    cout << endl;

    for(int i=0; i<=SIZE+10; i++){
        try{
            cout << myStack1.pop() << endl;
            cout << myStack1.peek() << endl;
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

    cout << endl;

    for(int i=0; i<=SIZE+100; i++){
        int random = rand() % 2;
        cout << "random is " << random << endl;
        if(random == 0){
            if(myStack1.push(i)){
            cout << "Element Insterted" << endl;
            }else{
            cout << "Overflow Error" << endl;
            }
        }else{
            try{
                cout << myStack1.pop() << endl;
            }catch(...){
                cout << "Underflow Error" << endl;
            }
        }
    }

    cout << endl;

    myStack1.readStack();


    return 0;
}