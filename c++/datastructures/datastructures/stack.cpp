//
//  stack.cpp
//  datastructures
//
//  Created by Lucie Chevreuil on 7/22/23.
//

#include "stack.h"
#include <stdlib.h>
#include <iostream>

//using namespace std; // causing errors - size is ambiguous

// LAST IN, FIRST OUT

//         push   pop!   pop!
// |    | | 30 | |    | |    |
// | 20 | | 20 | | 20 | |    |
// | 10 | | 10 | | 10 | | 10 |
// +----+ +----+ +----+ +----+
//  TOP=1  TOP=2  TOP=1  TOP=0

// isEmpty? check if stack is empty
// IsFull? check if the stack is full
// Peek? get top element value without removing it

// Empty stack -> TOP = -1
// Before push, check if stack is full (TOP != stack[max])
// Before pop, check if stack is empty (TOP != stack[-1])

//using namespace std;

// ########################################################################
// DEFINE VARIABLES
// ########################################################################
int size = 0;

// ########################################################################
// CREATE A STACK (defined in .h file)
// ########################################################################
//struct stack {
//  int items[MAX];
//  int top;
//};

//typedef struct stack st;
// The typedef keyword is used to create an alias for an existing data type. It allows you to define a new name for a data type to make the code more readable and maintainable.

void createEmptyStack(st *s) {
  s->top = -1;
}
// *s: The parameter "*s" in the function createEmptyStack is a pointer to a structure of type st. When we pass a pointer to a function, we can access the members of the structure using the arrow operator (->).


// ########################################################################
// FUNCTIONS
// ########################################################################
// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1; // stack is full
  else
    return 0; // stack is not full
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1; // stack is empty
  else
    return 0; // stack is not empty
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    std::cout << "STACK FULL";
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  size++;
}

// Remove elements into stack
void pop(st *s) {
  if (isempty(s)) {
    std::cout << "\n STACK EMPTY \n";
  }
  else {
      std::cout << "Item popped= " << s->items[s->top];
    s->top--;
  }
  size--;
    std::cout << std::endl;

}


// Print elements of stack
void printStack(st *s) {
    printf("Stack: ");
    for(int i = 0; i < size; i++) {
        std::cout << s->items[i] << " ";
    }
    std::cout << std::endl;
}
