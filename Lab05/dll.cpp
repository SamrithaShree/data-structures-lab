//Program to perform the functions of List ADT - Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

class DoublyLinkedList{
    private:
    struct node{
        int data;
        node *next;
        node *prev;
    }*head,*tail;

    public:
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
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
    DoublyLinkedList list;
    int option,val,pos;
    while(1){
        printf("MENU:\n");
        printf("1.Insert Beginning\n");
        printf("2.Insert End\n");
        printf("3.Insert Position\n");
        printf("4.Delete Beginning\n");
        printf("5.Delete End\n");
        printf("6.Delete Position\n");
        printf("7.Search\n");
        printf("8.Display\n");
        printf("9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&option);

        switch(option){
            case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            list.InsBeg(val);
            break;

            case 2:
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            list.InsEnd(val);
            break;

            case 3:
            printf("Enter the position to be inserted: ");
            scanf("%d",&pos);
            printf("Enter the value to be inserted: ");
            scanf("%d",&val);
            list.InsPos(val,pos);
            break;

            case 4:
            list.DelBeg();
            break;

            case 5:
            list.DelEnd();
            break;

            case 6:
            printf("Enter the position to be deleted: ");
            scanf("%d",&pos);
            list.DelPos(pos);
            break;

            case 7:
            printf("Enter the value to be searched: ");
            scanf("%d",&val);
            list.Search(val);
            break;

            case 8:
            list.Display();
            break;

            case 9:
            return 0;

            default:
            printf("Enter invalid choice\n");
            break;
        }
    }
    return 0;
}

//Insertion at the beginning of the Doubly Linked List 
void DoublyLinkedList :: InsBeg(int val){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = head;
    if(head==NULL){
        tail = newnode;
    }
    else{
        head->prev = newnode;
    }
    head = newnode;
}

//Insertion at the end of the Doubly Linked List 
void DoublyLinkedList :: InsEnd(int val){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = val;
    newnode->prev = tail;
    newnode->next = NULL;
    if(tail==NULL){
        head = newnode;
    }
    else{
        tail->next = newnode;
    }
    tail = newnode;
}

//Deletion at the given position of the Doubly Linked List
void DoublyLinkedList :: InsPos(int val,int pos){
    if(pos<1){
        printf("Invalid position\n");
        return;
    }
    else if(pos==1){
        InsBeg(val);
        return;
    }
    else{
        node *temp = head;
        for(int i=1;temp!=NULL && i<pos-1;i++){
            temp = temp->next;
        }
        if(temp == NULL){
            printf("Position out of range\n");
        }
        else{
            node *newnode = (node*)malloc(sizeof(node));
            newnode->data = val;
            newnode->next = temp->next;
            newnode->prev = temp;
            if(temp->next==NULL){
                temp->next = newnode;
                tail = newnode;
            }
            else{
                temp->next = newnode;
                newnode->next->prev = newnode;
            }
        }
    }
    return;
}


//Deletion at the beginning of the Doubly Linked List
int DoublyLinkedList :: DelBeg(){
    int data;
    if(head==NULL){
        printf("The list is empty\n");
    }
    else{
        node *temp = head;
        data = temp->data;
        if(temp->next==NULL){
            tail = NULL;
            head = head->next;
        }
        else{
            head = temp->next;
            head->prev = NULL;
        }
        
        free(temp);
    }
    return data;
}

//Deletion at the end of the Doubly Linked List
int DoublyLinkedList :: DelEnd(){
    int data;
    if (tail==NULL){
        printf("The list is empty");
    }
    else{
        node *temp = tail;
        data = temp->data;
        if(temp->prev==NULL){
            head = NULL;
            tail = tail->prev;
        }
        else{
            tail = temp->prev;
            tail->next = NULL;
        }
        free(temp);
    }
    return data;
}

//Deletion at the given position of the Doubly Linked List
int DoublyLinkedList :: DelPos(int pos){
    int data;
    if(pos<1){
        printf("Invalid position\n");
        return -1;
    }
    else if(pos==1){
        data = DelBeg();
        return data;
    }
    else{
        node *temp = head;
        for(int i=1;temp!=NULL && i<pos-1;i++){
            temp = temp->next;
        }
        if(temp->next==NULL || temp == NULL){
            printf("Position out of range\n");
        }
        else{
            data = temp->next->data;
            temp->next = temp->next->next;
            if(temp->next==NULL){
                tail = temp;
            }
            else{
                temp->next->prev = temp;
            }
        }
    }
    return data;
}

//Search for an element in the Doubly Linked List
int DoublyLinkedList :: Search(int val){
    int pos = 1;
    node *temp = head;
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

//Display the Doubly Linked List in both directions
void DoublyLinkedList :: Display(){
        printf("\n");
    node *temp1 = head;
    node *temp2 = tail;
    if(head==NULL){
        printf("The list is empty\n");
    }
    else{
        printf("Forward list: ");
        while(temp1!=NULL){
            printf("%d -> ",temp1->data);
            temp1 = temp1->next;
        }
        printf("NULL\n");

        printf("Backward list: ");
        while(temp2!=NULL){
            printf("%d -> ",temp2->data);
            temp2 = temp2->prev;
        }
        printf("NULL\n");
    }
    
    return;
}