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
    
    // #####################################################################
    // QUEUE
    // #####################################################################

}
