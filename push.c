#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * push - Function is used to add items to the top of a stack.
 * @stack: The top of the stack.
 * @n: Value of item to add to the stack.
 *
 * Description: Function is used to add items to the top of a stack.
 *
 * Return: Nothing.
 */
void push(stack_t **stack, int n)
{
	stack_t *new_op;

	while ((*stack)->prev == NULL)
	{
		new_op = malloc(sizeof(stack_t));
		new_op->n = n;
		new_op->next = *stack;
		new_op->prev = NULL;
		(*stack)->prev = new_op;
	}
}
