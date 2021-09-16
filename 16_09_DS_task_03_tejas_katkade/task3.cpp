
#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MAX 20
using namespace std;

// Structure for stack
struct stack {
  char st[MAX];
  int top;
}s;

// Initializing top for stack
void init(){
    s.top = -1;
}

// Check if stack is full
int isFull(){
    if(s.top == (MAX-1)){
        return 1;
    }
    return 0;
}

// Check if stack is empty
int isEmpty(){
    if(s.top == -1){
        return 1;
    }
    return 0;
}

// Push Element
void push(char data){
    if(isFull()){
        cout<<"[!!] Stack Overflow \n";
        exit(0);
    }else{
        s.st[++(s.top)] = data;
        return;
    }
}

// Pop and return top element
int pop(){
    if(isEmpty()){
        cout<<"[!!] Stack Underflow \n";
        exit(1);
    }else{
        int x;
        x = s.st[s.top];
        (s.top)--;
        return x;
    }
}




// Function to check if the character array is balanced or not
// Return 1 if it is and 0 if it is not
int isBalanced(char exp[]){
    int  j=0;
     while(exp[j]!='\0')
     {
         push(exp[j]);
         j++;
         if((s.st[s.top-1]=='['&&s.st[s.top]==']')||(s.st[s.top-1]=='{'&&s.st[s.top]=='}')||(s.st[s.top-1]=='('&&s.st[s.top]==')'))
            {
                pop();
                pop();
            }
     }
     if(isEmpty())
     {
         return 1;
     }
     else{
        return 0;
     }

}

//driver code
int main() {

    init();

    char exp[MAX];
    cout<<"Expression: \n";
     cin>>exp;

    if (isBalanced(exp))
    cout<<"Yes \n";
    else
    cout<<"No \n";

  return 0;
}

