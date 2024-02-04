#include "monty.h"

/**
 * pint - Print the value at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Prints the value at the top of the stack, followed by
 *a new line.
 *              If the stack is empty, prints an error message.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
