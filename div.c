#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * div_op - divides the second top element of the stack by the top element
 * @stack: double pointer to the top of the stack
 * @line_number: line number of the current opcode
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	temp->n /= (*stack)->n;
	*stack = temp;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
