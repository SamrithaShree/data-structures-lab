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

