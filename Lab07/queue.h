#ifndef QUEUESTRING_H
#define QUEUESTRING_H

#include<stdio.h>
#define SIZE 1000

class Queue{
    private:
    char queue[SIZE];
    int front,rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty();
    bool isFull();
    int enqueue(char);
    char reardequeue();
    void display();
};

//Check if the queue is empty
bool Queue :: isEmpty(){
    return(front==-1 || front>rear);
}

//Check if the queue is full
bool Queue :: isFull(){
    return(rear==SIZE-1);
}

//Insertion of the given value at the end of the queue
int Queue :: enqueue(char value){
    if(isFull()){
        printf("Queue is Full\n");
        return -1;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear] = value;
        return 0;
    }
}

//Deletion of the last element of the queue
char Queue :: reardequeue(){
    if(!(isEmpty())){
        char data = queue[rear];
        rear--;
        if(front>rear){
            front=rear=-1;
        }
        return data;
    }
    else{
        return '\0';
    }
}

// Function to display all elements in the queue
void Queue::display() {
    if (isEmpty()) {
        printf("String is empty.\n");
        return;
    }
    printf("Modified String: ");
    for (int i = front; i <= rear; i++) {
        printf("%c ", queue[i]);
    }
    printf("\n");
}

#endif