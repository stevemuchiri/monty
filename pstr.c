#include "monty.h"

/**
 * pstr_op - Print the string starting at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Prints the string starting at the top of the stack,
 * followed by a new line.
 *              Stops printing when reaching the end of the stack or a
 *              non-printable character.
 */
void pstr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number; /* Unused parameter */

	while (current != NULL && current->n != 0)
	{
		if (current->n < 0 || current->n > 127 || !isprint(current->n))
		break;

	printf("%c", current->n);
	current = current->next;
	}

	printf("\n");
}
