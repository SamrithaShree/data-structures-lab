#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H

#include <stdio.h>
#include <stack>
#include <string>  // Required for std::string
using namespace std;

// node structure for the expression tree


// Expression Tree class
class ExpressionTree {
    public:
    

public:
    struct node {
        char data;
        node* left;
        node* right;
        
        node(char val) {
            data = val;
            left = right = NULL;
        }
    };

    node* constructTree(const char* postfix);
    void preorder(node* root);
    void inorder(node* root); 
    void postorder(node* root);

private:
    bool isOperator(char ch) {
        return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
    }
};

ExpressionTree :: node* ExpressionTree :: constructTree(const char* postfix) {
    stack<node*> st;
    
    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];
        node* newNode = new node(ch);
        
        if (isOperator(ch)) {
            if (st.size() < 2) {
                printf("Error: Invalid postfix expression\n");
                return NULL;
            }
            newNode->right = st.top(); st.pop();
            newNode->left = st.top(); st.pop();
        }
        
        st.push(newNode);
    }
    
    return st.empty() ? NULL : st.top();
}

void ExpressionTree :: preorder(node* root){
    if (root) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void ExpressionTree :: inorder(node* root){
    if (root) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

void  ExpressionTree :: postorder(node* root){
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}

#endif // EXPRESSION_TREE_H