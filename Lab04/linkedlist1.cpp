#include<stdio.h>
#include<stdlib.h>
//Class definition
class LinkedList{
    private:
    //Creating a struct node
    struct node{
        int data;
        struct node *next;
    }*head;

    public:
    //Constructor
    LinkedList(){
        head = NULL;
    }
    void InsBeg(int);
    void InsEnd(int);
    void InsPos(int,int);
    int DelBeg();
    int DelEnd();
    int DelPos(int);
    int Search(int);
    void Display();
    void DisplayReverse();
    void PrintReverse(node *node);
    void ReverseLink();
};

int main(){
    LinkedList l;
    int option,val,pos;
    while(1){
        printf("Menu\n");
        printf("1.Insert Beginning\n");
        printf("2.Insert End\n");
        printf("3.Insert Position\n");
        printf("4.Delete Beginning\n");
        printf("5.Delete End\n");
        printf("6.Delete Position\n");
        printf("7.Search\n");
        printf("8.Display\n");
        printf("9.Display Reverse\n");
        printf("10.Reverse Link\n");
        printf("11.Exit\n");

        printf("Choose your option: ");
        scanf("%d",&option);

        switch(option){
            case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            l.InsBeg(val);
            break;

            case 2:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            l.InsEnd(val);
            break;

            case 3:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            printf("Enter the position to be inserted: ");
            scanf("%d",&pos);
            l.InsPos(val,pos);
            break;

            case 4:
            l.DelBeg();
            break;

            case 5:
            l.DelEnd();
            break;
            
            case 6:
            printf("Enter the position to be deleted: ");
            scanf("%d",&pos);
            l.DelPos(pos);
            break;

            case 7:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            l.Search(val);
            break;

            case 8:
            l.Display();
            break;

            case 9:
            l.DisplayReverse();
            break;

            case 10:
            l.ReverseLink();
            break;

            case 11:
            return 0;

            default:
            printf("Invalid Choice\n");
            break;
        }
    }
    
    return 0;
}

//Defining a function to insert the given value at the beginning of the linked list.
void LinkedList :: InsBeg(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    return;
}

//Defining a function to insert the given value at the end of the linked list.
void LinkedList :: InsEnd(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        return;
    }
    struct node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

//Defining a function to insert the given value at the given position
void LinkedList :: InsPos(int val, int pos){
    if(pos<1){
        return;
    }
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    if(pos==1){
        newnode->next = head;
        head = newnode;
        return;
    }
    else{
        struct node *temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return;
    
}

//Defining a function to delete at the beginning of the linked list.
int LinkedList :: DelBeg(){
    int data;
    if(head==NULL){
        return -1;
    }
    struct node *temp = head;
    data = temp->data;
    head = temp->next;
    free(temp);
    return data;
}

//Defining a function to delete at the end of the linked list.
int LinkedList :: DelEnd(){
    int data;
    if(head==NULL){
        return -1;
    }
    struct node *temp = head;
    if(temp->next==NULL){
        head=NULL;
        data = temp->data;
        return data;
    }
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    data = temp->next->data;
    temp->next = NULL;
    return data;
}

//Defining a function to delete at the given position of a linked list.
int LinkedList :: DelPos(int pos){
    int data;
    struct node *temp = head;
    pos-=1;
    while(pos!=1 && temp->next->next!=NULL){
        temp = temp->next;
        pos--;
    }
    if(pos!=1){
        return -1;
    }
    else{
        data = temp->next->data;
        temp->next = temp->next->next;
        return data;
    }
}

//Defining a function to search a value in the linked list.
int LinkedList :: Search(int val){
    int pos = 1;
    struct node *temp = head;
    while(temp!=NULL){
        if(temp->data == val){
            printf("Element %d found at position %d\n",val,pos);
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found\n");
    return -1;
}

//Defining a function to display the linked list 
void LinkedList :: Display(){
    printf("\n");
    struct node *temp = head;
    if(head==NULL){
        printf("The list is empty\n");
    }
    else{

        while(temp!=NULL){
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    
    return;
}

//Defining a function to display the reverse of the liked list without reversing the actual list
//using a recursive function
void LinkedList :: DisplayReverse(){
    if(head==NULL){
        printf("The List is Empty\n");
    }
    else{
        PrintReverse(head);
        printf("NULL\n");
    }
}

void LinkedList :: PrintReverse(node *node){
    if(node==NULL){
        return;
    }
    PrintReverse(node->next);
    printf("%d -> ",node->data);
}

//Defining a function to reverse the linked list
void LinkedList :: ReverseLink(){
    node *cur = head;
    node *next = NULL;
    node *prev = NULL;
    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}