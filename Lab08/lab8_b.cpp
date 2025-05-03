//Program to perform the functions of Tree ADT - Character Binary Tree Implementation
#include <stdio.h>
#include <stdlib.h>

class BinaryTree {
private:
    struct Node {
        char data;
        struct Node* left;
        struct Node* right;
    } *root;

    Node* createNode(char data); 
    void preorderTraversal(Node* node);
    void inorderTraversal(Node* node);
    void postorderTraversal(Node* node);
    Node* insertHelper(Node* node, char data);
    int searchHelper(Node* node, char key);

public:
    BinaryTree() {
        root = NULL;
    }

    void insertData(char data);
    void preorder();
    void inorder();
    void postorder();
    void searchData(char key);
};

int main() {
    BinaryTree tree;
    int choice;
    char data;

    while (1) {
        printf("\n1. Insert\n2. Preorder\n3. Inorder\n4. Postorder\n5. Search\n6. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter character to insert: ");
                scanf(" %c", &data);
                tree.insertData(data);
                break;
            case 2:
                tree.preorder();
                break;
            case 3:
                tree.inorder();
                break;
            case 4:
                tree.postorder();
                break;
            case 5:
                printf("Enter character to search: ");
                scanf(" %c", &data);
                tree.searchData(data);
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
                break;
        }
    }
}
//Create a newnode using malloc
BinaryTree :: Node * BinaryTree :: createNode(char data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Traversal following Preorder
void  BinaryTree :: preorderTraversal(Node* node) {
    if (node == NULL) return;
    printf("%c ", node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

//Traversal following Inorder
void BinaryTree :: inorderTraversal(Node* node) {
    if (node == NULL) return;
    inorderTraversal(node->left);
    printf("%c ", node->data);
    inorderTraversal(node->right);
}

//Traversal following Postorder
void BinaryTree :: postorderTraversal(Node* node) {
    if (node == NULL) return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%c ", node->data);
}

//Insert a given value at the given node
BinaryTree :: Node* BinaryTree :: insertHelper(Node* node, char data) {
    if (node == NULL) return createNode(data);
    
    char direction;
    printf("Insert %c to (L)eft or (R)ight of %c? ", data, node->data);
    scanf(" %c", &direction);

    if (direction == 'L' || direction == 'l')
        node->left = insertHelper(node->left, data);
    else
        node->right = insertHelper(node->right, data);

    return node;
}

//Search for a character in the tree
int BinaryTree :: searchHelper(Node* node, char key) {
    if (node == NULL) return 0;
    if (node->data == key) return 1;
    return searchHelper(node->left, key) || searchHelper(node->right, key);
}

//Return back the root of the modified tree after traversing
void BinaryTree :: insertData(char data) {
    root = insertHelper(root, data);
}

//Return back the root of the tree after traversing using preorder
void BinaryTree :: preorder() {
    printf("Preorder: ");
    preorderTraversal(root);
    printf("\n");
}

//Return back the root of the tree after traversing using inorder
void BinaryTree :: inorder() {
    printf("Inorder: ");
    inorderTraversal(root);
    printf("\n");
}

//Return back the root of the tree after traversing using postorder
void BinaryTree :: postorder() {
    printf("Postorder: ");
    postorderTraversal(root);
    printf("\n");
}

//Return back the root of the tree after traversing for searching
void BinaryTree :: searchData(char key) {
    if (searchHelper(root, key))
        printf("Element %c found in the tree\n", key);
    else
        printf("Element %c not found in the tree\n", key);
}