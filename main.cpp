/*********************
Name: Darren Bowers
Coding 03
Purpose: Stacks introduction assignment
**********************/




#include "main.h"

int main(int argc, char** argv){
    myStack myStack1(SIZE);

    for(int i=0; i<=SIZE+10; i++){
        if(myStack1.push(i)){
            cout << "Element Insterted" << endl;
        }else{
            cout << "Stack Full" << endl;
        }
        
    }

    cout << endl;
    myStack1.readStack();

    return 0;
}