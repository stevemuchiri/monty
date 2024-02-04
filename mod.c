#include "monty.h"

/**
 * mod_op - Computes the rest of the division of the second top element by the
 * top element
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Computes the rest of the division of the second top element by
 * the top element.
 *              The result is stored in the second top element.
 *              The top element of the stack is removed.
 */
void mod_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
