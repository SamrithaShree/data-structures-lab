#ifndef ROUND_ROBIN_H
#define ROUND_ROBIN_H

#include <stdio.h>
#include <stdlib.h>

// Structure for a process node
struct Process {
    int time;
    struct Process* next;
};

// Round Robin Scheduler class
class RoundRobinScheduler {
private:
    struct Process* tail; // Pointer to the last node
    int timeSlot;  // Fixed time slot

public:
    RoundRobinScheduler(int timeSlot); // Constructor
    ~RoundRobinScheduler();            // Destructor
    void insertProcess(int time);
    void execute();
    void displayQueue();
};

#endif