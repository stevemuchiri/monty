#include "monty.h"

/**
 * sub - Subtract the top element from the second top element of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Subtracts the top element from the second top
 * element of the stack.
 *              The result is stored in the second top element.
 *              The top element of the stack is removed.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
