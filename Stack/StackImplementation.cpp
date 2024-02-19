#include <iostream>
using namespace std;

//Declare the global variable that will keep the current elements in the stack..........
int top = -1;

//Stack[]  : array that will hold the elements in the stack
//x: x will be the parameter to be inserted in array
//n: maximum number of elements to be inserted in the array(size of array)

//Function to push the element in the stack
void push(int stack[], int x, int n){
    if(top == n - 1){
        cout << "stack Overflow" << endl;
        return;
    }
    else{
        top++;
        stack[top] = x;
    }
}

//Function to check if the array is empty
bool isEmpty(){
    return top == -1;
}


//Function to remove the top element in the array
void pop(){
    if(isEmpty())
        cout << "stack underflow" << endl;
    else{
        top--;
    }
}

//Function to return the size of the stack
int size(){
    return top + 1;
}

//Function to return the top element in the stack or the peek
int topElement(int stack[]){
    return stack[top];
}

int main(){
    int stack[ 3 ];
    // pushing element 5 in the stack .
    push(stack , 5 , 3 ) ;

    cout << "Current size of stack is " << size ( ) << endl ;

    push(stack , 10 , 3);
    push (stack , 20 , 3) ;

    cout << "Current size of stack is " << size( ) << endl ;

    //As the stack is full, further pushing will show an overflow condition.
    push(stack , 30 , 3) ;

    //Accessing the top element
    cout << "The current top element in stack is " << topElement(stack) << endl;

    //Removing all the elements from the stack
    for(int i = 0 ; i < 3;i++ ){
        pop();
    }

    cout << "Current size of stack is " << size( ) << endl ;

    //As the stack is empty , further popping will show an underflow condition.
    pop ( );


}




