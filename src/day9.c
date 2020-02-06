/*
 ============================================================================
 Name        : day9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "day9.h"

#define STACK_EMPTY -1
#define TRUE 0
#define FALSE 1

void stackInit(stack* stack)
{
	stack->index = -1;
}

int stackIsEmpty(stack* stack)
{
	int ret = FALSE;
	if(stack->index == STACK_EMPTY)
	{
		ret = TRUE;
	}
	return ret;
}

int stackIsFull(stack* stack)
{
	int ret = FALSE;

	if(stack->index == (NUM_OF_ELEMENTS - 1))
	{
		ret = TRUE;
	}

	return ret;
}

void stackPush(stack* stack, int x)
{
	if(FALSE == stackIsFull(stack))
	{
		stack->array[stack->index + 1] = x;
		stack->index++;
	}
	else
	{
		printf("Stack is full, can't push\n");
	}
}

int stackPop(stack* stack)
{
	int ret = FALSE;

	if(FALSE == stackIsEmpty(stack))
	{
		ret = stack->array[stack->index];
		stack->index--;
	}
	else
	{
		printf("Stack is empty, can't pop\n");
	}

	return ret;
}

int stackTop(stack* stack)
{
	int ret = FALSE;

	if(FALSE == stackIsEmpty(stack))
	{
		ret = stack->array[stack->index];
	}
	else
	{
		printf("Stack is empty, can't top\n");
	}

	return ret;
}

int main(void) {

	stack stog;
	int temp;

	stackInit(&stog);

	temp = stackIsEmpty(&stog);

	for(int i = 0; i < NUM_OF_ELEMENTS + 1; i++)
	{
		stackPush(&stog, i);
	}

	temp = stackIsEmpty(&stog);
	temp = stackPop(&stog);
	temp = stackTop(&stog);

	return EXIT_SUCCESS;
}
