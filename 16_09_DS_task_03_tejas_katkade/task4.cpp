
#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MAX 20
using namespace std;

// Structure for two stacks
struct twoStacks{
    char arr[MAX];
    int top1;
    int top2;
}ts;

// Initialise top1 and top2 here
void init(){
    ts.top1=-1;
    ts.top2=9;
}

// Write the code to push the data in Stack 1
void push1(int data){
    if(ts.top1==9)
    {
        cout<<"overflow:";
        exit(0);
    }
    else{
        ts.arr[++ts.top1]=data;
        return;
    }

}

// Write the code to push the data in Stack 2
void push2(int data){
        if(ts.top2==(MAX-1))
    {
        cout<<"overflow:";
        exit(1);
    }
    else{
        ts.arr[++ts.top2]=data;
        return ;
    }

}

// Write the code to pop the data from Stack 1
int pop1(){
       if(ts.top1==-1)
    {
        cout<<"underflowflow:";
        exit(2);
    }
    else{

        return ts.arr[ts.top1--];
    }


}

// Write the code to pop the data from Stack 2
int pop2(){
   if(ts.top2==9)
    {
        cout<<"underflowflow:";
        exit(3);
    }
    else{

        return ts.arr[ts.top2--];
    }
}

// Driver Code
int main() {

    init();

    int opt, element, poppedElement;

    while(opt != 0){

        cout<<"\n>> Which option do you want to choose? \n";
        cout<<" 1. Push in Stack 1 \n 2. Push in Stack 2 \n 3. Pop from Stack 1 \n 4. Pop from Stack 2 \n";
        cin>>opt;

        switch (opt)
        {
            case 1:
                cout<<">> Enter the element you want to push in Stack 1: \n";
                cin>>element;
                push1(element);
                break;
            case 2:
                cout<<">> Enter the element you want to push in Stack 2: \n";
                cin>>element;
                push2(element);
                break;
            case 3:
                poppedElement = pop1();
                cout<<">> The popped element is  \n"<<poppedElement;
                break;
            case 4:
                poppedElement = pop2();
                cout<<">> The popped element is \n"<< poppedElement;
                break;
            case 0:
                cout<<"[!!] Exiting";
                exit(0);
            default:
                cout<<"[!!] Invalid Input, Try Again";
                break;
        }
    }

    return 0;
}
