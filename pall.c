#include "monty.h"
/**
 * pall - Function prints all the values on the stack.
 * @stack: The top of the stack.
 *
 * Description: Function prints all the values on the stack.
 *
 * Return: Nothing.
 */
void pall(stack_t **stack)
{
	stack_t *top;

	top = *stack;
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
