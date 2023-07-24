//
//  main.cpp
//  datastructures
//
//  Created by Lucie Chevreuil on 7/22/23.
//

#include "stack.h"
#include "queue.h"
#include <iostream>

int main() {
    // #####################################################################
    // STACK
    // #####################################################################
    std::cout << "Stack ##################" << std::endl;
    st *s = (st *)malloc(sizeof(st)); // malloc = memory allocation
    createEmptyStack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    pop(s);
    std::cout << "\nAfter popping out\n";
    printStack(s);
    std::cout << std::endl;
    
    // #####################################################################
    // QUEUE
    // #####################################################################
    std::cout << "Queue ##################" << std::endl;
    Queue q;
    q.deQueue(); // deQueue is not possible on empty queue
    q.enQueue(1); // enQueue 5 elements
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6); // 6th element can't be added to because the queue is full
    q.display();
    q.deQueue(); // deQueue removes element entered first i.e. 1
    q.display(); // Now we have just 4 elements
    std::cout << std::endl;
}
