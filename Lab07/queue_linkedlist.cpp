//Program to perform the functions of Queue ADT - Singly Linked List Implementation
#include<stdio.h>
#include<stdlib.h>

class Queue{
    private:
    struct node{
        int data;
        struct node *next;
    }*front,*rear;

    public:
    //Constructor
    Queue(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty();
    int enqueue(int);
    int dequeue();
    int peek();
};

int main(){
    Queue q;
    int option,value,data;
    while(1){
        printf("MENU:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit\n");
        printf("Enter your option\n");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("Enter the value to be enqueued: ");
            scanf(" %d",&value);
            q.enqueue(value);
            break;

            case 2:
            data = q.dequeue();
            if (!data){
                break;
            }
            else{
                printf("The data dequeued from the queue is : %d\n",data);
                break;
            }
            break;

            case 3:
            data = q.peek();
            if (data==-1){
                break;
            }
            else{
                printf("The peek of the queue is: %d\n",data);
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

//Check if the queue is empty
bool Queue :: isEmpty(){
    return(front==NULL);
}

//Insertion of the given value at the end of the queue
int Queue :: enqueue(int value){
    node* newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory allocation failed!\n");
        return -1;
    }
    newnode->data = value;
    newnode->next = NULL;
    if(isEmpty()){
        front=rear=newnode;
    }
    rear->next = newnode;
    rear = newnode;
    return 0;
}

//Deletion of the top element of the queue
int Queue :: dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        return -1;
    }
    else{
        node *temp = front;
        int data = temp->data;
        front = front->next;
        if(front==NULL){
            rear = NULL;
        }
        free(temp);
        return data;
    }
}

//Display the peek element of the queue
int Queue :: peek(){
    if(isEmpty()){
        printf("The queue is Empty\n");
        return -1;
    }
    int data = front->data;
    return data;
}
