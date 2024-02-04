#include "monty.h"

/**
 * rotl_op - Rotate the stack to the top
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Rotates the stack to the top.
 *              The top element of the stack becomes the last one,
 *              and the second top element of the stack becomes the first one.
 */
void rotl_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *last;

	(void)line_number; /* Unused parameter */

	if (*stack == NULL || (*stack)->next == NULL)
	return;

	temp = *stack;
	last = *stack;

	while (last->next != NULL)
		last = last->next;

	*stack = temp->next;
	(*stack)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
