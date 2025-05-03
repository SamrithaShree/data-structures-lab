#include "4.lab9.d.h"

int main() {
    ExpressionTree et;
    char choice;
    char postfix[100];  // Fixed-size array instead of std::string
    ExpressionTree :: node* root = NULL;
    
    do {
        printf("\n1. Enter Postfix Expression\n2. Construct Expression Tree\n3. Preorder Traversal\n4. Inorder Traversal\n5. Postorder Traversal\n6. Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case '1':
                printf("Enter postfix expression: ");
                scanf("%s", postfix);  // Using scanf instead of cin
                break;
            case '2':
                root = et.constructTree(postfix);
                printf("Expression tree constructed.\n");
                break;
            case '3':
                printf("Preorder: ");
                et.preorder(root);
                printf("\n");
                break;
            case '4':
                printf("Inorder: ");
                et.inorder(root);
                printf("\n");
                break;
            case '5':
                printf("Postorder: ");
                et.postorder(root);
                printf("\n");
                break;
            case '6':
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != '6');
    
    return 0;
}