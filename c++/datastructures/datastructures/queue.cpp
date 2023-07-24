//
//  queue.c
//  datastructures
//
//  Created by Lucie Chevreuil on 7/22/23.
//

#include "queue.h"

// FIRST IN FIRST OUT
// Front -> [ 1 ][ 2 ][ 3 ][ 4 ] ... [ n ] <- Rear

// Enqueue: Add an element to the end of the queue
// Dequeue: Remove an element from the front of the queue
// IsEmpty: Check if the queue is empty
// IsFull: Check if the queue is full
// Peek: Get the value of the front of the queue without removing it

// Empty queue -> FRONT = -1, REAR = -1
// Before enqueue, check if queue is full
// Before dequeue, check if queue is empty

// ########################################################################
// Create Queue
// ########################################################################
Queue::Queue() {
    front = -1;
    rear = -1;
}

// ########################################################################
// Function Implementations
// ########################################################################

bool Queue::isFull() {
  if (front == 0 && rear == SIZE - 1) {
    return true;
  }
  return false;
}

bool Queue::isEmpty() {
    if (front == -1)
        return true;
    else
        return false;
}

void Queue::enQueue(int element) {
    if (isFull()) {
        std::cout << "Queue is full" << std::endl;
    } else {
        if (front == -1) front = 0;
        rear++;
        items[rear] = element;
        std::cout << std::endl << "Inserted " << element << std::endl;
    }
}

int Queue::deQueue() {
    int element;
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return (-1);
    } else {
        element = items[front];
        if (front >= rear) {
            front = -1;
            rear = -1;
        } // Q has only one element, so we reset the queue after deleting it.
        else {
            front++;
        }
        std::cout << std::endl << "Deleted -> " << element << std::endl;
        return (element);
    }
}

void Queue::display() {
    // Function to display elements of Queue
    int i;
    if (isEmpty()) {
        std::cout << std::endl << "Empty Queue" << std::endl;
    } else {
        std::cout << std::endl << "Front index-> " << front;
        std::cout << std::endl << "Items -> ";
        for (i = front; i <= rear; i++)
            std::cout << items[i] << "  ";
        std::cout << std::endl << "Rear index-> " << rear << std::endl;
    }
}
