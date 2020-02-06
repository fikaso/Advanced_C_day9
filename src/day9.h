/*
 * day9.h
 *
 *  Created on: Feb 6, 2020
 *      Author: user
 */

#ifndef DAY9_H_
#define DAY9_H_

#define NUM_OF_ELEMENTS 10

typedef struct stack
{
	int array[NUM_OF_ELEMENTS];
	int index;
}stack;


void stackInit(stack* stack);
int stackIsEmpty(stack* stack);
int stackIsFull(stack* stack);
void stackPush(stack* stack, int x);
int stackPop(stack* stack);
int stackTop(stack* stack);

#endif /* DAY9_H_ */
