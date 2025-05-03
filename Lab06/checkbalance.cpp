#include <stdio.h>
#include <cstdlib>
#include "stack2.h"

int main(){
    stack s;
    int ch;
    char str[100];
    while (1){
        printf("\n\nMenu\n1.Check Balance\n2.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter a string with open and closed parenthesis: ");
            scanf("%s", str);
            printf("Checking Balance...\n");
            check(str);
            break;

            case 2:
            return 0;

            default:
            printf("Invalid choice.");
        }
    }
}