//
//  datastructures.h
//  datastructures
//
//  Created by Lucie Chevreuil on 7/22/23.
//

#ifndef datastructures_h
#define datastructures_h

#include <iostream>

// ########################################################################
// STACK
// ########################################################################
#define MAX 4

extern int size;

struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s);
int isfull(st *s);
int isempty(st *s);
void push(st *s, int newitem);
void pop(st *s);
void printStack(st *s);

// ########################################################################
// XX
// ########################################################################

#endif /* datastructures_h */