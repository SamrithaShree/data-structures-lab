//Program to perform the functions of Cicular Queue ADT - Array Implementation
#include<stdio.h>
#define SIZE 5

class CircularQueue{
    private:
    int queue[SIZE];
    int front,rear;

    public:
    CircularQueue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty();
    bool isFull();
    int enqueue(int);
    int dequeue();
    int peek();
};

int main(){
    CircularQueue q;
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

            case 5:
            return 0;

            default:
            printf("Invalid option\n");
            return 0;
        }
    }
    return 0;
}

//Check if the queue is empty
bool CircularQueue :: isEmpty(){
    return(front==-1);
}

//Check if the queue is full
bool CircularQueue :: isFull(){
    return(((rear-front+1)%SIZE)==SIZE);
}

//Insertion of the given value at the end of the queue
int CircularQueue :: enqueue(int value){
    if(isFull()){
        printf("Queue is Full\n");
        return -1;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear = (rear+1)%SIZE;
        queue[rear] = value;
        return 0;
    }
}

//Deletion of the top element of the queue
int CircularQueue :: dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        return -1;
    }
    else{
        int data = queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front = (front+1)%SIZE;
        }
        return data;
    }
}

//Display the peek element of the queue
int CircularQueue :: peek(){
    if(isEmpty()){
        printf("The queue is Empty\n");
        return -1;
    }
    return queue[front];
}
