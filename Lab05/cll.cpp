// Program to perform functions of list ADT - Circular Linked List.
#include<stdio.h>
#include<stdlib.h>

class CircularLinkedList{
    private:
    struct node{
        int data;
        node *next;
    } *head;

    public:
    CircularLinkedList(){
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
};

int main(){
    CircularLinkedList l;
    int option,val,pos;
    while(1){
        //Printing Menu
        printf("MENU:\n");
        printf("1.Insertion at Beginning\n");
        printf("2.Insertion at End\n");
        printf("3.Insertion at Position\n");
        printf("4.Deletion at Beginning\n");
        printf("5.Deletion at End\n");
        printf("6.Deletion at Position\n");
        printf("7.Search for an element\n");
        printf("8.Display the list\n");
        printf("9.Exit\n");

        printf("Enter your choice: ");
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
            printf("Enter the position to be inserted: ");
            scanf("%d",&pos);
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
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
            printf("Enter the value to be searched: ");
            scanf("%d",&val);
            l.Search(val);
            break;

            case 8:
            l.Display();
            break;

            case 9:
            return 0;

            default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}

//Insertion at the beginning of a Circular Linked List
void CircularLinkedList :: InsBeg(int val){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    if(head==NULL){
        newnode->next = newnode;
    }
    else{
        node *temp = head;
        newnode->next = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    head = newnode;
    return;
}

//Insertion at the end of a Circular Linked List
void CircularLinkedList :: InsEnd(int val){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    if(head==NULL){
        head = newnode;
    }
    else{
        node *temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    newnode->next = head;
    return;
}

//Insertion at the given position of a Circular Linked List
void CircularLinkedList :: InsPos(int val,int pos){
    if(pos<1){
        printf("Invalid Position\n");
        return;
    }
    else if(pos==1){
        InsBeg(val);
        return;
    }
    else{
        node *temp = head;
        int count=1;
        for(int i=1;temp->next!=head && i<pos-1;i++){
            temp = temp->next;
            count++;
        }
        if(count!=pos-1){
            printf("Position out of range\n");
            return;
        }
        else if(temp->next==head){
            InsEnd(val);
            return;
        }
        else{
            node *newnode =(node*)malloc(sizeof(node));
            newnode->data = val;
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    return;
}

//Deletion at the beginning of a Circular Linked List
int CircularLinkedList :: DelBeg(){
    int data;
    if(head==NULL){
        printf("List is empty\n");
        return -1;
    }
    else if(head->next == head){
        data = head->next->data;
        head = NULL;
        return data;
    }
    else{
        node *temp = head;
        data = head->next->data;
        while(temp->next!=head){
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
    }
    return data;
}

//Deletion at the end of a Circular Linked List
int CircularLinkedList :: DelEnd(){
    int data;
    if(head==NULL){
        printf("List is empty\n");
        return -1;
    }
    else if(head->next == head){
        data = head->next->data;
        head = NULL;
        return data;
    }
    else{
        node *temp = head;
        while(temp->next->next!=head){
            temp = temp->next;
        }
        data = temp->next->data;
        temp->next = head;
    }
    return data;
}

//Insertion at the given position of a Circular Linked List
int CircularLinkedList :: DelPos(int pos){
    int data;
    if(pos<1){
        printf("Invalid Position\n");
        return -1;
    }
    else if(pos==1){
        data = DelBeg();
        return data;
    }
    else{
        node *temp = head;
        int count=1;
        for(int i=1;temp->next!=head && i<pos-1;i++){
            temp = temp->next;
            count++;
        }
        if(count!=pos-1){
            printf("Position out of range\n");
            return -1;
        }
        else if(temp->next==head){
            data = DelEnd();
        return data;
        }
        else{
            data = temp->next->data;
            temp->next = temp->next->next;
        }
    }
    return data;
}

//Seach for the given value in the Circular Linked List
int CircularLinkedList :: Search(int val){
    int pos = 1;
    node *temp = head;
    while(temp->next!=head){
        if(temp->data == val){
            printf("Element %d found at position %d\n",val,pos);
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    if(temp->data == val){
        printf("Element %d found at position %d\n",val,pos);
        return pos;
    }
    printf("Element not found\n");
    return -1;
} 

//Display the elements of a Circular Linked List
void CircularLinkedList :: Display(){
    printf("\n");
    struct node *temp = head;
    if(head==NULL){
        printf("The list is empty\n");
    }
    else{
        printf("%d -> ",temp->data);
        temp = temp->next;
        while(temp!=head){
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        printf("(Circular)\n");
    }
    
    return;
}