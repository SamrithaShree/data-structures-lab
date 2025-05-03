#include<stdio.h>
#include "4.qexp.h"

int main(){
    Queue q;
    int option;
    char value;
    while(1){
        printf("MENU:\n");
        printf("1.Insert character\n2.Get Result\n3.Exit\n");
        printf("Enter your option\n");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("Enter the character to be inserted in the string: \n");
            scanf(" %c",&value);
            if(value=='+'){
                q.reardequeue();
            }
            else{
                q.enqueue(value);
            }
            break;

            case 2:
            q.display();
            break;

            case 3:
            return 0;

            default:
            printf("Invalid option\n");
            return 0;
        }
    }
    return 0;
}