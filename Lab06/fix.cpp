#include "stack1.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 100
char infix[MAX], postfix[MAX];

int main(){
    int option,result;
    while(1){
        printf("MENU:\n");
        printf("1.Get Infix\n2.Convert Infix\n3.Evaluate Postfix\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&option);

        switch(option){
            case 1:
            GetInfix();
            break;

            case 2:
            InfixtoPostfix();
            break;

            case 3:
            result = EvaluatePostfix();
            printf("Evaluation Result: %d\n", result);
            break;

            case 4:
            return 0;

            default:
            printf("Invalid choice\n");
            return 0;
        }
    }
    return 0;
}

//Input of the infix expression
void GetInfix(){
    printf("Enter a valid infix expression: ");
    scanf("%s",infix);
    return;
}

//Conversion of the infix expression to postfix expression
void InfixtoPostfix() {
    Stack s;
    int i = 0, j = 0;
    char ch;
    
    while (infix[i] != '\0') {
        ch = infix[i];

        if (isdigit(ch)) { 
            while (isdigit(infix[i])) {  
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' '; 
            i--;
        } 
        else { 
            while (!s.isEmpty() && Precedence(s.peek()) >= Precedence(ch)) {
                postfix[j++] = s.pop();
                postfix[j++] = ' '; 
            }
            s.push(ch);
        }
        i++;
    }

    // Pop remaining operators
    while (!s.isEmpty()) {
        postfix[j++] = s.pop();
        postfix[j++] = ' ';
    }

    postfix[j] = '\0'; 

    printf("Postfix Expression: %s\n", postfix);
}

//Evaluation of Postfix Expression
int EvaluatePostfix() {
    Stack s;
    int i = 0;
    char ch;
    
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) { 
            int num = 0;
            
            while (isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0'); 
                i++;
            }
            s.push(num); 

        } else if (postfix[i] != ' ') {
            int op2 = s.pop();
            int op1 = s.pop();

            switch (postfix[i]) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
                case '%': s.push(op1 % op2); break;
                case '=':
                    printf("Result = %d\n", op2);
                    return op2;
            }
        }
        i++; 
    }
    
    return s.pop(); 
}

//Return the precedence of operators
int Precedence(char ch){
    switch(ch){
        case '=':
        return 1;

        case '+': case '-':
        return 2;

        case '*': case '/': case '%':
        return 3;

        default:
        printf("Invalid operator\n");
        return 0;
    }
}


