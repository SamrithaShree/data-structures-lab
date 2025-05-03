#include "rr.h"
#include <stdio.h>
#include <stdlib.h>

// Constructor
RoundRobinScheduler::RoundRobinScheduler(int timeSlot) {
    this->tail = NULL;
    this->timeSlot = timeSlot;
}

// Destructor
RoundRobinScheduler::~RoundRobinScheduler() {
    if (!tail) return;
    struct Process* current = tail->next;
    struct Process* temp;
    while (current != tail) {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(tail);
}

// Insert a process at the end
void RoundRobinScheduler::insertProcess(int time) {
    struct Process* newProcess = (struct Process*)malloc(sizeof(struct Process));
    newProcess->time = time;

    if (!tail) {
        newProcess->next = newProcess;
        tail = newProcess;
    } else {
        newProcess->next = tail->next;
        tail->next = newProcess;
        tail = newProcess;
    }
}

// Execute the first process
void RoundRobinScheduler::execute() {
    if (!tail) {
        printf("No processes to execute!\n");
        return;
    }

    struct Process* head = tail->next;
    printf("Executing process with time: %d\n", head->time);

    int remainingTime = head->time - timeSlot;

    if (head == tail) { 
        free(head);
        tail = NULL;
    } else {
        tail->next = head->next;
        free(head);
    }

    if (remainingTime > 0) {
        insertProcess(remainingTime);
    }
}

// Display the queue
void RoundRobinScheduler::displayQueue() {
    if (!tail) {
        printf("Queue is empty!\n");
        return;
    }
    struct Process* current = tail->next;
    printf("Process Queue: ");
    do {
        printf("%d ", current->time);
        current = current->next;
    } while (current != tail->next);
    printf("\n");
}

// Main function
int main() {
    int timeSlot;
    printf("Enter fixed time slot: ");
    scanf("%d", &timeSlot);

    RoundRobinScheduler scheduler(timeSlot);

    int choice, processTime;
    while (1) {
        printf("\n1. Insert Process\n2. Execute\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter process time: ");
                scanf("%d", &processTime);
                scheduler.insertProcess(processTime);
                scheduler.displayQueue();
                break;
            case 2:
                scheduler.execute();
                scheduler.displayQueue();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}