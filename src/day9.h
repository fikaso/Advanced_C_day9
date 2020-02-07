/*
 * day9.h
 *
 *  Created on: Feb 6, 2020
 *      Author: user
 */

#ifndef DAY9_H_
#define DAY9_H_

#define NUM_OF_ELEMENTS 10

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void Init();
void push(int value);
void pop();
int isempty();

#endif /* DAY9_H_ */
