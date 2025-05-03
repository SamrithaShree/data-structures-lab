//Program to perform the functions of Stack ADT - Singly Linked List
#include<stdio.h>
#include<stdlib.h>

class Stack{
    private:
    struct node{
        char data;
        node *next;
    }*top;

    public:
    Stack(){
        top = NULL;
    }

    void push(char);
    char pop();
    char peek();
};

int main(){
    Stack s;
    int option;
    char element,res;
    while(1){
        printf("MENU:\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        printf("Enter your option\n");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("Enter the character to be pushed: ");
            scanf(" %c",&element);
            s.push(element);
            break;

            case 2:
            res = s.pop();
            if (res=='\0'){
                break;
            }
            else{
                printf("The element popped out of the Stack is: %c\n",res);
                break;
            }
            break;

            case 3:
            res = s.peek();
            if (res=='\0'){
                break;
            }
            else{
                printf("The top of the stack is: %c\n",res);
                break;
            }
            break;

            case 4:
            return 0;

            default:
            printf("Invalid option\n");
            return 0;
        }
    }
    return 0;
}

//Insertion of the given character at the top of the Stack
void Stack :: push(char element){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = element;
    newnode->next = top;
    top = newnode;
    return;
}

//Deletion of the given character at the top of the Stack
char Stack :: pop(){
    char data;
    if(top==NULL){
        printf("Stack underflow\n");
        return '\0';
    }
    else{
        node *temp = top;
        data = top->data;
        top = top->next;
        free(temp);
        return data;
    }
}

//Display the top element of the Stack
char Stack :: peek(){
    if(top==NULL){
        printf("Stack underflow\n");
        return '\0';
    }
    return top->data;
}