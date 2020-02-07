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

#define TRUE 0
#define FALSE 1


void Init()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;

    printf("Pushed %d\n", value);
}

void pop()
{
    node *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);

    printf("Popped %d\n", n);
}

int isempty()
{
	int ret = FALSE;
	if(top == NULL)
	{
		ret = TRUE;
	}
    return ret;
}

int main()
{
	Init();
    push(10);
    push(20);
    push(30);
    pop();
    return 0;
}
