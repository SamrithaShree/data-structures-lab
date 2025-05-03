#ifndef STACK_H
#define STACK_H


//Program to perform the functions of Stack ADT - Array Implementation
#include<stdio.h>
#define SIZE 5

class Stack{
    private:
    char arr[SIZE];
    int top;

    public:
    Stack(){
        top = -1;
    }

    void push(char);
    char pop();
    char peek();
    bool isEmpty();
};

void GetInfix();
void InfixtoPostfix();
int EvaluatePostfix();
int Precedence(char);


//Insertion f the given character at the top of the Stack
void Stack :: push(char element){
    if(top>=SIZE){
        printf("Stack overflow\n");
        return;
    }
    else{
        top++;
        arr[top]=element;
        return;
    }
}

//Deletion of the given character at the top of the Stack
char Stack :: pop(){
    char data;
    if(top<0){
        printf("Stack underflow\n");
        return '\0';
    }
    else{
        data = arr[top];
        top--;
        return data;
    }
}

//Display the top element of the Stack
char Stack :: peek(){
    if(top<0){
        printf("Stack underflow\n");
        return '\0';
    }
    return arr[top];
}

//Check if the Stack is Empty
bool Stack :: isEmpty() {
    return top <0;
}

#endif