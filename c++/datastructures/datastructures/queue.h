//
//  queue.h
//  datastructures
//
//  Created by Lucie Chevreuil on 7/22/23.
//

#ifndef queue_h
#define queue_h

#include <iostream>

#define SIZE 5

class Queue {
private:
    int items[SIZE];
    int front;
    int rear;

public:
    Queue();
    bool isFull();
    bool isEmpty();
    void enQueue(int element);
    int deQueue();
    void display();
};


#endif /* queue_h */
